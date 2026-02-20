#include <Arduino.h>
#include <DHT.h>
#define DHTPIN 2     // DHT11 CONNECTED TO D2
#define DHTTYPE DHT11   // Sensor type
DHT dht(DHTPIN, DHTTYPE);
void setup() {
    dht.begin();
    Serial.begin(9600);
    dht.begin();
    Serial.println("DHT11 Sensor initialized!");
}

void loop() {


}
