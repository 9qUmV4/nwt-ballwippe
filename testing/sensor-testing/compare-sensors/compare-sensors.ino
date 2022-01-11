#include <SharpIR.h>

#define LIGHT_SENSOR_PIN A0
#define LIGHT_SENSOR_MODEL 1080
#define SONIC_SENSOR_TRIGGER_PIN 5
#define SONIC_SENSOR_ECHO_PIN 6

SharpIR sharpIR(LIGHT_SENSOR_PIN, LIGHT_SENSOR_MODEL);

void setup() {
  Serial.begin(115200);

  // Sonic sensor
  pinMode(SONIC_SENSOR_ECHO_PIN, INPUT);
  pinMode(SONIC_SENSOR_TRIGGER_PIN, OUTPUT);
  digitalWrite(SONIC_SENSOR_TRIGGER_PIN, LOW);

  // Light sensor


  delay(1000);
}

void loop() {
  digitalWrite(SONIC_SENSOR_TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(SONIC_SENSOR_TRIGGER_PIN, LOW);

  unsigned long time_d = pulseIn(SONIC_SENSOR_ECHO_PIN, HIGH);
  unsigned int dis_s = 0.017 * time_d;

  unsigned int dis_l = sharpIR.distance();

  Serial.print("sound | light\t");
  Serial.print(dis_s);
  Serial.print(" | ");
  Serial.println(dis_l);
  delay(100);
  

}
