#define stepPin1 2 // X.STEP
#define dirPin1 5 // X.DIR
#define stepPin2 3 // Y.STEP
#define dirPin2 6 // Y.DIR

//#define MS1 10
//#define MS2 11

#define stepsPerRevolution 200   // Makes 200 pulses for making one full cycle rotation

 
 void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin1,OUTPUT); 
  pinMode(dirPin1,OUTPUT);

  pinMode(stepPin2,OUTPUT); 
  pinMode(dirPin2,OUTPUT);

 }

 void loop() {

  digitalWrite(dirPin1,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < stepsPerRevolution; x++) {
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(1000); 
  }
  delay(1000); // One second delay
 
 
  digitalWrite(dirPin1,LOW); //Changes the rotations direction
  // Makes 400 pulses for making one full cycle rotation
  for(int x = 0; x < 2*stepsPerRevolution; x++) {
    digitalWrite(stepPin1,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin1,LOW);
    delayMicroseconds(1000);
  }
  delay(1000);                                


  digitalWrite(dirPin2,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < stepsPerRevolution; x++) {
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(1000); 
  }
  delay(1000); // One second delay

 
  digitalWrite(dirPin2,LOW); //Changes the rotations direction
  // Makes 400 pulses for making one full cycle rotation
  for(int x = 0; x < 2*stepsPerRevolution; x++) {
    digitalWrite(stepPin2,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin2,LOW);
    delayMicroseconds(1000);
  }
  delay(1000);

 }