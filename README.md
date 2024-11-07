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
### • Create direction (folder)
### • Additional Boards Manager URLs:
![Adding D1 board](https://user-images.githubusercontent.com/90613715/136137356-2b111d4f-9d0a-40d4-93f7-a4b5822519b5.png)
#### http://arduino.esp8266.com/stable/package_esp8266com_index.json
### Include Library
#### ADD-libraries (given in class)
![image](https://github.com/iiotntust/1131blynk/blob/01c3c5d45ded1c1025633532b3b8dc54eee54e90/picture/DHT_library.png)
![image](https://github.com/iiotntust/1131blynk/blob/b3d5cbfd3bf243e682d7199d318bef684ff77c4b/picture/blynk_lib.png)
#### Blynk_Release_v0.4.4 (subject to revise)
##### Board Management
##### Select WEMOS D1 D2 & Mini
![image](https://user-images.githubusercontent.com/90613715/136137703-b16dc503-77f5-4ca5-9b64-8c1aa63df06a.png)
##### Select version
![image](https://user-images.githubusercontent.com/90613715/136137734-69b77d4d-990a-4e4e-aa4c-538c84cff0f5.png)
##### Downloading
![image](https://user-images.githubusercontent.com/90613715/136137757-3d42dad3-74df-4d64-8111-6f09dc399356.png)
##### Board setting
![image](https://user-images.githubusercontent.com/90613715/136137786-1b7dcb8d-c9e7-4dae-870f-c0717c141fb5.png)
##### Port setting
### Flash / Speed / Port
![image](https://user-images.githubusercontent.com/90613715/136137824-dea2a259-f6c4-4555-96f9-12e4deabbd01.png)
#### Confirmation
![Confirmation](https://user-images.githubusercontent.com/90613715/136138097-7c533699-a672-43c7-9111-8aed1d91c32d.png)
## Blynk
- Go to blynk website and sign up.
### Create template
#### Add new template.
![image]()  
- Enter the template's name.
Hardware choose ESP8266 and connection type is WiFi.
![image](picture/9.png)  
#### Go to datastreams
- Add new datastream and choose virtual pin
![image](picture/5.png) 
- Name can be HUMIDITY and TEMPERATURE, each name has it own PIN(for example is V5 and V6)
- Type is interger.
- Unit you can use percentage and degrees.
>[!NOTE]
> Because humidity is expressed as a percentage.
> So the range should be 0 to 100.

Like this.
![image](picture/11.png)  
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
![image](picture/blynk_success.png)  
# Result
![image](picture/biynk+dht11.png)  
## Powermeter
https://www.peacefair.cn/product/772.html
## Reference
- resources: https://github.com/iiotntust/powermeter
