#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "zBC3izdHQO3carFrsBpyxluYK7u1Rqqk";

char ssid[] = "CREATIVE EXPERTZ";

char pass[] = "creative";

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
