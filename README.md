# JoyArcadeByUNOR3
create joyarcade by Ardunio UNO R3\
ขั้นตอนการติดตั้ง 
  >1.upload sketch_apr18a.ino เข้าสู่ board\
 > 2.ทำการ set pin ตามที่ต้องการ โดยใช้ \
    >>UnoJoyWin/UnoJoyProcessingVisualizer/UnoJoyProcessingVisualizer.exe \
 > ในการดูว่าปุ่มเป็นตามที่ต้องการ\
 > 3.ทำให้ board เป็น DFU mode โดนการเอาตัวนำไฟฟ้า หรือ สายไฟมาแตะที่ ขา สองขาหน้าทางฝั้ง USB port\
 >1                        2 ---->\
           o o o           |        | o o \
   ----|   o o o           |----|   | o o\
       |                   |    |     \
   USB |                   |USB |      \
       |                   |    |   \
   ----|                   |----|\
                           |\
 > 4.คลิก UnoJoyWin/TurnIntoAJoystick.bat เพื่อทำการ flashing \
 > 5.ถอดสายออกและเสียบใหม่อีกครั้ง\
 > 6.เช็คทำงาน ของ อุปกรณ์
  >>  1.เข้า Device Manager \
  >>  2.เข้า Human Interface Device\
  >>  3.เช็ค HID-compliant system controller \
กรณีต้องการเขียนโปรแกรมใหม่อีกครั้ง
 > ทำตามขั้นตอนที่ 3-5 แต่เปลี่ยน โปนแกรมข้อ 4 เป็น UnoJoyWin/TurnIntoAnArduino.bat\
**หมายเหตุ**
 > เกมที่รองรับแน่นอนคือ เกมประเภท fighting เช่น Tekken7
 
