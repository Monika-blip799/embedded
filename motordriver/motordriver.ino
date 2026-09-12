int in1 = 7;
int in2 = 6;
int in3 = 5;
int in4 = 4;
void setup() {
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  // put your setup code here, to run once:
  }

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(in1,HIGH);
  delay(500);
  digitalWrite(in2,LOW);
  delay(500);
  digitalWrite(in3,HIGH);
  delay(500);
  digitalWrite(in4,LOW);
  delay(500);

  digitalWrite(in1,LOW);
  delay(500);
  digitalWrite(in2,HIGH);
  delay(500);
  digitalWrite(in3,LOW);
  delay(500);
  digitalWrite(in4,HIGH);
  delay(500);
}
