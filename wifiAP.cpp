#include <Arduino.h>
#include <WiFi.h>

const char *ssid = "WiFi_ESP32";
const char *password = "AndreaESP32";

void setup(){
    Serial.begin(115200);
    delay(10);

    WiFi.mode(WIFI_AP);
    while(!WiFi.softAP(ssid, password)){
        Serial.println(".");
        delay(100);
    }
    Serial.print("Inicializado AP ");
    Serial.println(ssid);
    Serial.print("Dirección IP: \t");
    Serial.println(WiFi.softAPIP());
}

void loop(){
    
}