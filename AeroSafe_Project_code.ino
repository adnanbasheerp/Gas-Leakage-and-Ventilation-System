#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
#define MQ5_PIN A0
#define LDR_PIN A1
#define PIR_PIN 3

DHT dht(DHTPIN, DHTTYPE);

int motionctrl = 0;
int lastpir = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(PIR_PIN, INPUT);
  dht.begin();
}

void loop() {
  float temp = dht.readTemperature();
  int gas = digitalRead(MQ5_PIN);
  int ldr = analogRead(LDR_PIN);
  int pir = digitalRead(PIR_PIN);

  if (pir == HIGH && lastpir == LOW) {
    motionctrl++;
    Serial.println("Motion Detected. No of ppl= ");
    Serial.println(motionctrl);
  }
  lastpir = pir;

  if (gas > 250) {
    Serial.println("Gas Leakage Detected");
    Serial.println("Gas Value: ");
    Serial.println(gas);
    Serial.println("Ventilation Fan ON");
  }
  if (gas < 250) {
    Serial.println("No Gas Leakage");
  }
  if (ldr < 300) {
    Serial.println("DAY");
  }
  if (ldr > 300) {
    Serial.println("NIGHT");
  }
  Serial.println("Temp is: ");
  Serial.println(temp);
  delay(2000);
}
