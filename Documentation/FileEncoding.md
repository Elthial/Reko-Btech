# File Encoding

The image files (.ICN, .CMP) are compressed using Run-Length Encoding.
There are two different formats of run-length encoding used in Crescent Hawks Inception.

When open an image file the first two bytes are the file size (minus those two bytes).
The 3rd byte informs the code which of the follow run-length encoding algorithms to use.

|3rd Byte|Format|Notes|
|----|----|----|
|01|Format01|Linear read|
|02|Format02|160 Byte Object loop read|


### Format01
Run length encoding algorithm:

`Start`:

Read a Byte, this is now the `Index Byte`.

It a value is negative it is flipped to the positive
(-2 to 2, -8 to 8)

If `Index Byte` is non-Zero
  - `Index Byte` becomes `Run-Length Counter`
  - Next byte becomes `output value`.
  - Write to output.
  - Repeat until `Run-Length Counter` is Zero.
  - Goto `Start`;

If `Index Byte` is Zero
  - Next byte becomes `Run-Length Counter`
  - Next byte becomes `output value`.
  - Write to output same value for `Run-Length Counter` times.
  - Goto `Start`;

### Format02
The run-length encoding is identical to Format01.
However the file is read as a sequence of `160 byte object` s.
First byte is extracted per object.

|160 Byte Object|160 Byte Object|
|----|----|
|`01` .. .. .. | `D2` .. ..|

Two objects per x line. (X line is 320 pixels)

|160 Byte Object|160 Byte Object|
|----|----|
|`01` .. .. .. | `D2` .. ..|
|`03` .. .. .. | `DE` .. ..|
|`E3` .. .. .. | `F2` .. ..|
|`D1` .. .. .. | `A3` .. ..|
|`41` .. .. .. | `DD` .. ..|
| 200 lines total | 200 lines total |

`200 Y` lines to the end of the file.  (320 x 200 file size)

|160 Byte Object|160 Byte Object|
|----|----|
|`01` `D5` .. .. | `D2` `4B` ..|

Then the write is reset to the second byte per object.

```
const short YAxisSize = 200;
const short XAxisObjectNextByteOffset = 31999;

...
...
...

if (YAxisRemaining == 0)
    {
      YAxisRemaining = YAxisSize;
      log.Debug($"Buffer_Index: {DecodedBuffer_Index}");
      DecodedBuffer_Index -= XAxisObjectNextByteOffset; //Move back to beginning but second byte
      log.Debug($"After RunLength Reset Buffer_Index: {DecodedBuffer_Index}");
    }
```

This behaviour is controller by the `-31999` (`XAxisObjectNextByteOffset`) and `200` (`YAxisSize`) offsets seen in the Format02 algorithm.
