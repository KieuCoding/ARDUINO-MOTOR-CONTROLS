// ALL PINS AND SPECIFICATIONS ARE FOR ARDUINO NANO ATmega328p (CHINESE BOOTLEG)
// KOOKBOOK L9110S MOTORDRIVER
const int KookMotorA_pin1 = 2;  // MotorA pin A-1A goes to arduino's digital pin 2
const int KookMotorA_pin2 = 3;  // MotorA pin A-1B goes to arduino's digital pin 3
const int KookMotorB_pin1 = 4;  // MotorB pin B-1A goes to arduino's digital pin 4
const int KookMotorB_pin2 = 5; //  MotorB pin B-1B goes to arduino's digital pin 5

// TB6612 MOTORDRIVER
const int MotorA_pin1 = 6;  // Pin AIN1 connects to digital pin 6
const int MotorA_pin2 = 7;  // Pin AIN2 connects to digital pin 7
const int MotorB_pin1 = 8;  // Pin BIN1 connects to digital pin 8
const int MotorB_pin2 = 9;  // Pin BIN2 connects to digital pin 9
const int PWM = 10;         // Pins PWMA and PWMB both connect to digital pin 10




void setup() {
  // put your setup code here, to run once:
  pinMode(KookMotorA_pin1, OUTPUT);
  pinMode(KookMotorA_pin2, OUTPUT);
  pinMode(KookMotorB_pin1, OUTPUT);
  pinMode(KookMotorB_pin2, OUTPUT);
  pinMode(MotorA_pin1, OUTPUT);
  pinMode(MotorA_pin2, OUTPUT);
  pinMode(MotorB_pin1, OUTPUT);
  pinMode(MotorB_pin2, OUTPUT);
  pinMode(PWM, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // main code loop
  digitalWrite(KookMotorA_pin1, HIGH);
  digitalWrite(KookMotorA_pin2, LOW);
  digitalWrite(KookMotorB_pin1, LOW);
  digitalWrite(KookMotorB_pin2, HIGH);

  analogWrite(PWM, 130);
  digitalWrite(MotorA_pin1, HIGH);
  digitalWrite(MotorA_pin2, LOW);
  digitalWrite(MotorB_pin1, HIGH);
  digitalWrite(MotorB_pin2, LOW);
  delay(100000);    //in nano seconds
  
}
