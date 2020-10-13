#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "zBC3ixxxxxxxxxxxxxxxxx";      //Auth token of Blynk

char ssid[] = "xxxxxx";                     //Wifi Name

char pass[] = "xxxxxxxx";                   //Wifi Password

void setup()

{

// Debug console
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);

}

void loop()

{
Blynk.run();
}
