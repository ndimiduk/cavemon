/*
 * Cavemon client application.
 */

// WiFi library provided by Arduino installation.
#include <WiFi.h>

// DHT library for the temp/humid sensor. Example code from
// https://github.com/adafruit/DHT-sensor-library/blob/master/examples/DHTtester/DHTtester.ino
#include "DHT.h"

// configure wifi and cavemon server
char ssid[] = "";
char passwd[] = "";
IPAddress server(127,0,0,1);
WiFiClient client;

// configure DHT sensor location and type
#define DHTPIN 2
#define DHTTYPE DHT22

// initialize
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  while (!Serial);

  Serial.println("cavemon client initialized.");
}

void loop() {
  // sleep for 5 secs
  delay(5000);
}

