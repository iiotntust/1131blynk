# 1121powermeter update (Handson#2)
In this exercise, students learn how to use IoT platforms to build an IoT project.  
## Blynk QuickStart  
- Blynk.io https://blynk.io/
- Getting start: https://docs.blynk.io/en/getting-started/what-do-i-need-to-blynk
- Support hardware:https://docs.blynk.io/en/getting-started/supported-boards
## Device D1 mini
- Microcontroller (Arduino compatible)
https://www.wemos.cc/en/latest/d1/d1_mini.html
## DHT-11 (Humi/Temp sensor)
https://github.com/dhrubasaha08/DHT11
### Get start
1. Setting the environment:
- Download Arduino: https://www.arduino.cc/en/software
![image](https://github.com/iiotntust/1131blynk/blob/f482b2e8d83cc8fce1db40308162bd033a11e1da/picture/arduino.png)
> [!CAUTION]
> Don't forget to install CH340 driver
> - (download CH340 driver) https://www.arduined.eu/ch340-windows-10-driver-download/
> - (how to install) https://forum.arduino.cc/t/how-to-install-ch340-driver-for-windows-11/1154087  

Here is the wiring diagram:  
![image](picture/D1_mini_blynk.png)
> [!CAUTION]
> 5V -> (+)  
> G -> (-)  
> D4 -> out  
>  An incorrect wiring connection could result in the component being damaged by overheating.

# Adding D1 board
### Preferences
![image](https://user-images.githubusercontent.com/90613715/136137227-869b415b-4267-47e0-82eb-20b4f56cd149.png)  
### • Additional Boards Manager URLs:
![image](picture/13.png)  
#### http://arduino.esp8266.com/stable/package_esp8266com_index.json
### Include Library
#### ADD-libraries
![image](picture/DHT_library.png)
![image](picture/blynk_lib.png)  
##### Board Management
##### Select WEMOS D1 D2 & Mini 
![image](picture/14.png)
![image](picture/15.png)  
##### Board setting
- Download ESP8266 from Tools -> Board -> board manager
![image](picture/16.png) 
##### Port setting
### Flash / Speed / Port
- Follow the setting from Board setting only red block you need to change.
> [!NOTE]
> Other settings are as same as default

#### Confirmation
> [!CAUTION]
> ![image](picture/17.png)  
> Please double check those 5 lines code are correct, otherwise D1 even cannot link to your WiFi

## Blynk
- Go to blynk website and sign up.
### Create template
#### Add new template.
![image](picture/12.png)  
- Enter the template's name.
Hardware choose ESP8266 and connection type is WiFi.
![image](picture/9.png)  
#### Go to datastreams
- Add new datastream and choose virtual pin
![image](picture/5.png) 
- Name can be HUMIDITY and TEMPERATURE, each name has it own PIN(for example is V5 and V6)
- Type is interger.
- Unit you can use percentage and degrees.
> [!NOTE]
> Because humidity is expressed as a percentage.
> So the range should be 0 to 100.

Like this.
![image](picture/11.png)  
- Try to do another one.
![image](picture/10.png)  
#### Go to Web dashboard.
- Drag two label to your dashboard.
![image](picture/2.png)  
- Click label's setting and change its name.  
![image](picture/6.png)  
- Choose the datastream you created and save.
![image](picture/7.png)  
#### Create device
- Go to device
- Add new device from template
![image](picture/8.png)  
> [!NOTE]
> At here, you can see your own token, you need this token and put in arduino D1.
> I suggest you copy first.(You also can find token in Developer tools)
> ![image](picture/3.5.png)  
> ![image](picture/3.png)  

Blynk setting finish at here.
## Arduino code
- Download the code from [HERE](blynk_DHT11.ino)  
- If your program is right, you check serial monitor will see this
> [!NOTE]
>  
![image](picture/blynk_success.png)  
# Result
![image](picture/biynk+dht11.png)  
## Powermeter
https://www.peacefair.cn/product/772.html
## Reference
- resources: https://github.com/iiotntust/powermeter
