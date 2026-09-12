int ir = 3;
int led = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);

   if(digitalRead(ir)==LOW){
    Serial.println("No object detected");
    digitalWrite(led,LOW);
  }
  else{
    Serial.println("object detected");
    digitalWrite(led,HIGH);
    delay(1000);
}
}
void loop() {
 
  
  // put your main code here, to run repeatedly:

}
