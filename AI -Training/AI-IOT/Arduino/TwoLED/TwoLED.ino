int led1 = 9;
int led2 = 10;
char s=7;

void setup() {
  pinMode(s,INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
 if digitalRead(s,LOW){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW); 
 };
  else{
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led2, HIGH); 
    delay(500);
  };     
}