# BlynkGO_font
Font สำหรับจอ TFT ด้วย BlynkGO  

## วิธีการใช้งาน BlynkGO font
- ให้สำเนา  ฟอนต์ c file ไปวางไว้ใน folder ของโปรเจคที่ต้องการ 
  
- ประกาศ `FONT_DECLARE(...);` ก่อนการใช้งานฟอนต์ที่ต้องการ

```cpp
#include <BlynkGO.h>

#define BLYNKGO_KEY    "---------------"

FONT_DECLARE(fonleb_35);   // ประกาศ ฟอนต์ ก่อนที่จะใช้งาน

GLabel label;

void setup(){
  Serial.begin(115200); Serial.println();
  BlynkGO.begin(BLYNKGO_KEY);

  label = "สวัสดีครับ";
  label.font(fonleb_35); // กำหนดให้ label แสดงด้วยฟอนต์ fonleb_35
}

void loop(){
  BlynkGO.update();
}
```

## SYMBOL สัญลักษณ์ที่สามารถใช้ได้  
|    SYMBOL       |    สัญลักษณ์   |
| -------------   |      :---:    |
| SYMBOL_AUDIO    | ![SYMBOL_AUDIO](SYMBOL_AUDIO.png) |
| SYMBOL_VIDEO    | ![SYMBOL_VIDEO](SYMBOL_VIDEO.png) |
| SYMBOL_LIST     | ![SYMBOL_LIST](SYMBOL_LIST.png) |
| SYMBOL_OK       | ![SYMBOL_OK](SYMBOL_OK.png) |
| SYMBOL_POWER    | ![SYMBOL_POWER](SYMBOL_POWER.png) |
| SYMBOL_SETTINGS | ![SYMBOL_SETTINGS](SYMBOL_SETTINGS.png) |
| SYMBOL_TRASH    | ![SYMBOL_TRASH](SYMBOL_TRASH.png) |
| SYMBOL_HOME     | ![SYMBOL_HOME](SYMBOL_HOME.png) |
| SYMBOL_DOWNLOAD | ![SYMBOL_DOWNLOAD](SYMBOL_DOWNLOAD.png) |
| SYMBOL_DRIVE | ![SYMBOL_DRIVE](SYMBOL_DRIVE.png) |
| SYMBOL_REFRESH | ![SYMBOL_REFRESH](SYMBOL_REFRESH.png) |
| SYMBOL_MUTE | ![SYMBOL_MUTE](SYMBOL_MUTE.png) |
| SYMBOL_VOLUME_MID | ![SYMBOL_VOLUME_MID](SYMBOL_VOLUME_MID.png) |
| SYMBOL_VOLUME_MAX | ![SYMBOL_VOLUME_MAX](SYMBOL_VOLUME_MAX.png) |
| SYMBOL_IMAGE | ![SYMBOL_IMAGE](SYMBOL_IMAGE.png) |
| SYMBOL_EDIT | ![SYMBOL_EDIT](SYMBOL_EDIT.png) |
| SYMBOL_PREV | ![SYMBOL_PREV](SYMBOL_PREV.png) |
| SYMBOL_PLAY | ![SYMBOL_PLAY](SYMBOL_PLAY.png) |
| SYMBOL_PAUSE | ![SYMBOL_PAUSE](SYMBOL_PAUSE.png) |
| SYMBOL_STOP | ![SYMBOL_STOP](SYMBOL_STOP.png) |
| SYMBOL_NEXT | ![SYMBOL_NEXT](SYMBOL_NEXT.png) |
| SYMBOL_EJECT | ![SYMBOL_EJECT](SYMBOL_EJECT.png) |
| SYMBOL_LEFT | ![SYMBOL_LEFT](SYMBOL_LEFT.png) |
| SYMBOL_RIGHT | ![SYMBOL_RIGHT](SYMBOL_RIGHT.png) |
| SYMBOL_ARROW_LEFT | ![SYMBOL_ARROW_LEFT](SYMBOL_ARROW_LEFT.png) |
| SYMBOL_ARROW_RIGHT | ![SYMBOL_ARROW_RIGHT](SYMBOL_ARROW_RIGHT.png) |
| SYMBOL_ARROW_UP | ![SYMBOL_ARROW_UP](SYMBOL_ARROW_UP.png) |
| SYMBOL_ARROW_DOWN | ![SYMBOL_ARROW_DOWN](SYMBOL_ARROW_DOWN.png) |
| SYMBOL_PLUS | ![SYMBOL_PLUS](SYMBOL_PLUS.png) |
| SYMBOL_MINUS | ![SYMBOL_MINUS](SYMBOL_MINUS.png) |

