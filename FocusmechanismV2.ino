/*Example sketch to control a stepper motor with A4988/DRV8825 stepper motor driver and Arduino without a library. More info: https://www.makerguides.com */

// Define stepper motor connections and steps per revolution:
#define dirPin 6
#define stepPin 3
#define stepsPerRevolution 200

int waarde = 0;
int stage = 0;
int verschil = 0;

void setup() {
    Serial.begin(9600);

  // Declare pins as output:
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);

}

void loop() {


if (stage == 0) {
  digitalWrite(8, LOW);
  int potmeter = analogRead(A0);
  Serial.print("Nu ben ik op: ");
  Serial.println(potmeter);
  Serial.print("Enter waarde: ");  
    while (Serial.available() == 0) { //Wait for user input  }  
        waarde = Serial.parseInt(); //Reading the Input int from Serial port. 
        

    }
    if (0 < waarde and waarde < 1024) {
      Serial.print(waarde);
      Serial.println(" ");
      stage = 1;
    }
Serial.read();
delay(1000);
}

else if (stage == 1) {
  digitalWrite(8, LOW);

  int potmeter = analogRead(A0);
  
  Serial.println(potmeter);
  
    if (potmeter != waarde) {
    // Spin the stepper motor 1 revolution quickly:
        if ((potmeter) < waarde) {
          verschil = (waarde - potmeter);
          while (verschil > 0){
            digitalWrite(dirPin, LOW);
            digitalWrite(stepPin, HIGH);
            delayMicroseconds(1000);
            digitalWrite(stepPin, LOW);
            delayMicroseconds(1000);
            verschil = (verschil - 1);
          }
        }
        if ((potmeter) > waarde) {
          verschil = (potmeter - waarde);
          while (verschil > 0){
            digitalWrite(dirPin, HIGH);
            digitalWrite(stepPin, HIGH);
            delayMicroseconds(1000);
            digitalWrite(stepPin, LOW);
            delayMicroseconds(1000);
            verschil = (verschil - 1);
        }
    }
    }
    if (potmeter == waarde) {
        digitalWrite(8, HIGH);
        waarde = 0;
        stage = 0;
    }
}

}
