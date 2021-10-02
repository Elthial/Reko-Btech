# Map File Format

Except for the world map which is embedded in the EXE.  
All Crescent Hawk Inception Maps are stored in .MTP files

|FileName|MapFormat|Tileset|Purpose|
|----|----|----|----|
|MAP1.MTP|BlockFormat|BTTLTECH|Citadel|
|MAP2.MTP|BlockFormat|BTTLTECH|Starport
|MAP3.MTP|LinearFormat|BTTLTECH|Prison|
|MAP4.MTP|LinearFormat|BTTLTECH|Village|
|MAP5.MTP|LinearFormat|BTTLTECH|Village|
|MAP6.MTP|LinearFormat|BTTLTECH|Village|
|MAP7.MTP|LinearFormat|BTTLTECH|Village|
|MAP8.MTP|LinearFormat|BTTLTECH|Village|
|MAP9.MTP|LinearFormat|BTTLTECH|Village|
|MAP10.MTP|LinearFormat|BTTLTECH|Village|
|MAP11.MTP|BlockFormat|DESTRUCT|Destroyed Citadel|
|MAP12.MTP|BlockFormat|BTTLTECH|Inventors hut|
|MAP13.MTP|BlockFormat|BTTLTECH|Cache exterior|
|MAP14.MTP|BlockFormat|STARLEAG|StarLeague Cache|
|MAP15.MTP|LinearFormat|MAP|Star Map|

There are two map formats:

|Format|Note|
|----|----|
|Block Format|Map is read as 8x8 chunks sequentially.|  
|Linear Format|Map is read linearly from X -> `MapSize`, Y-> `MapSize`. <br /> Top left corner to bottom right corner.|

The MTP file has the following structure:  
(This is still a work in progresss)

|Purpose|Type|Length in Bytes|
|----|----|----|
Variable1||1|
|Variable2||1||
|Variable3||1|
|`MapSizeX`|Int|1|
|`MapSizeY`|Int|1|
|Variable6||128|
|Variable7||256|
|Variable8||32|
|Variable9||32|
|Variable10||32|
|Variable11||32|
|Variable12||16|
|Variable13||8|
|`EncodedMap`|Byte[]|4096|

It is known from Hex viewing the files that NPCs are in the map data.
However the mapping them to the variables hasn't occurred yet


### Star Map

The only exception to the above is the Star Map (`MAP15.MTP`).
The Star Map has the following structure:

|Purpose|Type|Length in Bytes|
|----|----|----|
|`EncodedMap`|Byte[]|1800|

The Star Maps size is not included in this non-standard .MTP file.  
Map size is:  
`MapSizeX` = 32;  
`MapSizeY` = 24;     
