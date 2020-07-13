# BlynkGO_font
Font สำหรับจอ TFT ด้วย BlynkGO  

## วิธีการใช้งาน BlynkGO font
- Save โปรเจค แล้วเปิดโฟลเดอร์โปรเจคนั้นขึ้นมา  
โดยเข้าไปที่เมนู `Sketch > Show Sketch Folder`  
  
![ArduinoIDE_ShowSketchFolder](./images/ArduinoIDE_ShowSketchFolder.png)

- ให้สำเนา  ฟอนต์ c file ไปวางไว้ใน folder ของโปรเจคที่ต้องการ 

![ArduinoIDE_copy_font_to_projectr](./images/ArduinoIDE_copy_font_to_projectr.png)
  
- ปิดโปรเจคแล้วเปิดใหม่ จะพบมี tab ฟอนต์ที่ต้องการได้เพิ่มเข้ามา  
ให้ประกาศ `FONT_DECLARE(...);` ก่อนการใช้งานฟอนต์นั้น  

![ArduinoIDE_font_declare](./images/ArduinoIDE_font_declare.png)  

- นำฟอนต์ไปใช้ในวิตเจตที่ต้องการ

![ArduinoIDE_glabel_use_font](./images/ArduinoIDE_glabel_use_font.png)  

  
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
**หมายเหตุ** 
ฟอนต์ประสานมิตร ขนาด 20, 25, 30, 35, 40
ผู้ใช้ สามารถเรียกใช้ได้เลยโดยไม่ต้องประกาศ `FONT_DECLARE(...);` อีก
- prasanmit_20 
- prasanmit_25 
- prasanmit_30 
- prasanmit_35 
- prasanmit_40 

## วิธีการใช้งาน สัญลักษณ์ ( symbol )
- เลือก font ที่มี SYMBOL อยู่ภายใน  
แล้วกำหนดให้ GLabel ตรงๆ ด้วยเครื่องหมาย = 

```cpp
#include <BlynkGO.h>

#define BLYNKGO_KEY    "---------------"

FONT_DECLARE(fonleb_35);   // ประกาศ ฟอนต์ ก่อนที่จะใช้งาน

GLabel label;

void setup(){
  Serial.begin(115200); Serial.println();
  BlynkGO.begin(BLYNKGO_KEY);

  label = SYMBOL_HOME;
  label.font(fonleb_35); // กำหนดให้ label แสดงด้วยฟอนต์ fonleb_35
}

void loop(){
  BlynkGO.update();
}
```
  
## SYMBOL สัญลักษณ์ที่สามารถใช้ได้  
|    SYMBOL       |    สัญลักษณ์   |
| -------------   |      :---:    |
| SYMBOL_AUDIO    | ![SYMBOL_AUDIO](./images/SYMBOL_AUDIO.png) |
| SYMBOL_VIDEO    | ![SYMBOL_VIDEO](./images/SYMBOL_VIDEO.png) |
| SYMBOL_LIST     | ![SYMBOL_LIST](./images/SYMBOL_LIST.png) |
| SYMBOL_OK       | ![SYMBOL_OK](./images/SYMBOL_OK.png) |
| SYMBOL_POWER    | ![SYMBOL_POWER](./images/SYMBOL_POWER.png) |
| SYMBOL_SETTINGS | ![SYMBOL_SETTINGS](./images/SYMBOL_SETTINGS.png) |
| SYMBOL_TRASH    | ![SYMBOL_TRASH](./images/SYMBOL_TRASH.png) |
| SYMBOL_HOME     | ![SYMBOL_HOME](./images/SYMBOL_HOME.png) |
| SYMBOL_DOWNLOAD | ![SYMBOL_DOWNLOAD](./images/SYMBOL_DOWNLOAD.png) |
| SYMBOL_DRIVE | ![SYMBOL_DRIVE](./images/SYMBOL_DRIVE.png) |
| SYMBOL_REFRESH | ![SYMBOL_REFRESH](./images/SYMBOL_REFRESH.png) |
| SYMBOL_MUTE | ![SYMBOL_MUTE](./images/SYMBOL_MUTE.png) |
| SYMBOL_VOLUME_MID | ![SYMBOL_VOLUME_MID](./images/SYMBOL_VOLUME_MID.png) |
| SYMBOL_VOLUME_MAX | ![SYMBOL_VOLUME_MAX](./images/SYMBOL_VOLUME_MAX.png) |
| SYMBOL_IMAGE | ![SYMBOL_IMAGE](./images/SYMBOL_IMAGE.png) |
| SYMBOL_EDIT | ![SYMBOL_EDIT](./images/SYMBOL_EDIT.png) |
| SYMBOL_PREV | ![SYMBOL_PREV](./images/SYMBOL_PREV.png) |
| SYMBOL_PLAY | ![SYMBOL_PLAY](./images/SYMBOL_PLAY.png) |
| SYMBOL_PAUSE | ![SYMBOL_PAUSE](./images/SYMBOL_PAUSE.png) |
| SYMBOL_STOP | ![SYMBOL_STOP](./images/SYMBOL_STOP.png) |
| SYMBOL_NEXT | ![SYMBOL_NEXT](./images/SYMBOL_NEXT.png) |
| SYMBOL_EJECT | ![SYMBOL_EJECT](./images/SYMBOL_EJECT.png) |
| SYMBOL_LEFT | ![SYMBOL_LEFT](./images/SYMBOL_LEFT.png) |
| SYMBOL_RIGHT | ![SYMBOL_RIGHT](./images/SYMBOL_RIGHT.png) |
| SYMBOL_ARROW_LEFT | ![SYMBOL_ARROW_LEFT](./images/SYMBOL_ARROW_LEFT.png) |
| SYMBOL_ARROW_RIGHT | ![SYMBOL_ARROW_RIGHT](./images/SYMBOL_ARROW_RIGHT.png) |
| SYMBOL_ARROW_UP | ![SYMBOL_ARROW_UP](./images/SYMBOL_ARROW_UP.png) |
| SYMBOL_ARROW_DOWN | ![SYMBOL_ARROW_DOWN](./images/SYMBOL_ARROW_DOWN.png) |
| SYMBOL_PLUS | ![SYMBOL_PLUS](./images/SYMBOL_PLUS.png) |
| SYMBOL_MINUS | ![SYMBOL_MINUS](./images/SYMBOL_MINUS.png) |
| SYMBOL_WARNING | ![SYMBOL_WARNING](./images/SYMBOL_WARNING.png) |
| SYMBOL_SHUFFLE | ![SYMBOL_SHUFFLE](./images/SYMBOL_SHUFFLE.png) |
| SYMBOL_UP | ![SYMBOL_UP](./images/SYMBOL_UP.png) |
| SYMBOL_DOWN | ![SYMBOL_DOWN](./images/SYMBOL_DOWN.png) |
| SYMBOL_LOOP | ![SYMBOL_LOOP](./images/SYMBOL_LOOP.png) |
| SYMBOL_DIRECTORY | ![SYMBOL_DIRECTORY](./images/SYMBOL_DIRECTORY.png) |
| SYMBOL_UPLOAD | ![SYMBOL_UPLOAD](./images/SYMBOL_UPLOAD.png) |
| SYMBOL_CALL | ![SYMBOL_CALL](./images/SYMBOL_CALL.png) |
| SYMBOL_CUT | ![SYMBOL_CUT](./images/SYMBOL_CUT.png) |
| SYMBOL_COPY | ![SYMBOL_COPY](./images/SYMBOL_COPY.png) |
| SYMBOL_SAVE | ![SYMBOL_SAVE](./images/SYMBOL_SAVE.png) |
| SYMBOL_CHARGE | ![SYMBOL_CHARGE](./images/SYMBOL_CHARGE.png) |
| SYMBOL_BELL | ![SYMBOL_BELL](./images/SYMBOL_BELL.png) |
| SYMBOL_KEYBOARD | ![SYMBOL_KEYBOARD](./images/SYMBOL_KEYBOARD.png) |
| SYMBOL_GPS | ![SYMBOL_GPS](./images/SYMBOL_GPS.png) |
| SYMBOL_FILE | ![SYMBOL_FILE](./images/SYMBOL_FILE.png) |
| SYMBOL_ARROW_LONG_LEFT | ![SYMBOL_ARROW_LONG_LEFT](./images/SYMBOL_ARROW_LONG_LEFT.png) |
| SYMBOL_WIFI | ![SYMBOL_WIFI](./images/SYMBOL_WIFI.png) |
| SYMBOL_BATTERY_FULL | ![SYMBOL_BATTERY_FULL](./images/SYMBOL_BATTERY_FULL.png) |
| SYMBOL_BATTERY_3 | ![SYMBOL_BATTERY_3](./images/SYMBOL_BATTERY_3.png) |
| SYMBOL_BATTERY_2 | ![SYMBOL_BATTERY_2](./images/SYMBOL_BATTERY_2.png) |
| SYMBOL_BATTERY_1 | ![SYMBOL_BATTERY_1](./images/SYMBOL_BATTERY_1.png) |
| SYMBOL_BATTERY_EMPTY | ![SYMBOL_BATTERY_EMPTY](./images/SYMBOL_BATTERY_EMPTY.png) |
| SYMBOL_BLUETOOTH | ![SYMBOL_BLUETOOTH](./images/SYMBOL_BLUETOOTH.png) |
| SYMBOL_THERMO_4 | ![SYMBOL_THERMO_4](./images/SYMBOL_THERMO_4.png) |
| SYMBOL_THERMO_3 | ![SYMBOL_THERMO_3](./images/SYMBOL_THERMO_3.png) |
| SYMBOL_THERMO_2 | ![SYMBOL_THERMO_2](./images/SYMBOL_THERMO_2.png) |
| SYMBOL_THERMO_1 | ![SYMBOL_THERMO_1](./images/SYMBOL_THERMO_1.png) |
| SYMBOL_THERMO_0 | ![SYMBOL_THERMO_0](./images/SYMBOL_THERMO_0.png) |
| SYMBOL_SHOWER | ![SYMBOL_SHOWER](./images/SYMBOL_SHOWER.png) |
| SYMBOL_BATHROOM | ![SYMBOL_BATHROOM](./images/SYMBOL_BATHROOM.png) |
| SYMBOL_WIFI_1 | ![SYMBOL_WIFI_1](./images/SYMBOL_WIFI_1.png) |
| SYMBOL_WIFI_2 | ![SYMBOL_WIFI_2](./images/SYMBOL_WIFI_2.png) |
| SYMBOL_WIFI_3 | ![SYMBOL_WIFI_3](./images/SYMBOL_WIFI_3.png) |
| SYMBOL_WIFI_4 | ![SYMBOL_WIFI_4](./images/SYMBOL_WIFI_4.png) |
| SYMBOL_WIFI_NO_CON_1 | ![SYMBOL_WIFI_NO_CON_1](./images/SYMBOL_WIFI_NO_CON_1.png) |
| SYMBOL_WIFI_NO_CON_2 | ![SYMBOL_WIFI_NO_CON_2](./images/SYMBOL_WIFI_NO_CON_2.png) |
| SYMBOL_ENTER | ![SYMBOL_ENTER](./images/SYMBOL_ENTER.png) |
| SYMBOL_OPTION | ![SYMBOL_OPTION](./images/SYMBOL_OPTION.png) |
| SYMBOL_ALARM | ![SYMBOL_ALARM](./images/SYMBOL_ALARM.png) |
| SYMBOL_EYE_OPEN | ![SYMBOL_EYE_OPEN](./images/SYMBOL_EYE_OPEN.png) |
| SYMBOL_EYE_CLOSE | ![SYMBOL_EYE_CLOSE](./images/SYMBOL_EYE_CLOSE.png) |
| SYMBOL_DEGREE | ![SYMBOL_DEGREE](./images/SYMBOL_DEGREE.png) |
| SYMBOL_MICRO | ![SYMBOL_MICRO](./images/SYMBOL_MICRO.png) |
| SYMBOL_UMBRELLA | ![SYMBOL_UMBRELLA](./images/SYMBOL_UMBRELLA.png) |
| SYMBOL_WALKING | ![SYMBOL_WALKING](./images/SYMBOL_WALKING.png) |
| SYMBOL_BACKSPACE | ![SYMBOL_BACKSPACE](./images/SYMBOL_BACKSPACE.png) |


