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
|    SYMBOL     |    สัญลักษณ์   |
| ------------- |      :---:    |
| SYMBOL_AUDIO  | ![SYMBOL_AUDIO](SYMBOL_AUDIO.png) |
| SYMBOL_OK     | ![SYMBOL_OK](SYMBOL_OK.png) |
| SYMBOL_LIST   | ![SYMBOL_LIST](SYMBOL_LIST.png) |
| SYMBOL_VIDEO  | ![SYMBOL_VIDEO](SYMBOL_VIDEO.png) |


