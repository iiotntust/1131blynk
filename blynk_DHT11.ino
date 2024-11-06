#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL6bVwW9iX4"//your template ID
#define BLYNK_TEMPLATE_NAME "test"//your template name
#include <ESP8266WiFi.h>//board manager ESP8266
#include <BlynkSimpleEsp8266.h>//library blynk
#include <SoftwareSerial.h> // Arduino IDE <1.6.6

#include <DHT.h> //library DHT sensor library

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
//#define BLYNK_AUTH_TOKEN "yJF5LkUoaLFb5jMEkic_yktkXMYZ13a1"
char auth[] = "yJF5LkUoaLFb5jMEkic_yktkXMYZ13a1";
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Classroom";
char pass[] = "ntustclassroom";
 
#define DHTPIN D4          // What digital pin we're connected to
#define DHTTYPE DHT11     // DHT 11<p>DHT dht(DHTPIN, DHTTYPE);
DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;
float t;
float h;

void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  dht.begin();
  timer.setInterval(1000L, sendSensor);
}
 
void loop()
{
  Blynk.run();
  timer.run();
}
 
 
// This function sends Arduino's up time every second to Virtual Pin (5).
// In the app, Widget's reading frequency should be set to PUSH. This means
// that you define how often to send data to Blynk App.
void sendSensor()
{
  h = dht.readHumidity();
  t = dht.readTemperature(); // or dht.readTemperature(true) for Fahrenheit
//  l = analogRead(LDR);
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
  Blynk.virtualWrite(V5, h);
  Blynk.virtualWrite(V6, t);
}
