//Reference: LastminuteEngineers(https://lastminuteengineers.com/l298n-dc-stepper-driver-arduino-tutorial/)

//Motor A connection
int in1_pin = 2;
int in2_pin = 3;

//Motor B connection
int in3_pin = 4;
int in4_pin = 5;


void setup(){
  //Set all motor control pins to outputs
  pinMode(in1_pin, OUTPUT);
  pinMode(in2_pin, OUTPUT);
  pinMode(in3_pin, OUTPUT);
  pinMode(in4_pin, OUTPUT);

  //Turn of motor - Initial state
  digitalWrite(in1_pin, LOW);
  digitalWrite(in2_pin, LOW);
  digitalWrite(in3_pin, LOW);
  digitalWrite(in4_pin, LOW);
}

void loop() {

  //Turn on Motor A & B
  digitalWrite(in1_pin, HIGH);
  digitalWrite(in2_pin, LOW);
  digitalWrite(in3_pin, HIGH);
  digitalWrite(in4_pin, LOW);
  delay(3000);

  //Change direction of Motor A & B
  digitalWrite(in1_pin, LOW);
  digitalWrite(in2_pin, HIGH);
  digitalWrite(in3_pin, LOW);
  digitalWrite(in4_pin, HIGH);
  delay(3000);

  //Turn off motors
  digitalWrite(in1_pin, LOW);
  digitalWrite(in2_pin, LOW);
  digitalWrite(in3_pin, LOW);
  digitalWrite(in4_pin, LOW);
}
