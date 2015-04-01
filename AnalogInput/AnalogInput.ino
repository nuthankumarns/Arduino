int sensePin = 0;
int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
  analogReference(DEFAULT);
  
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(sensePin);
 // map(val, 
  
  
  if(val<50) digitalWrite(ledPin, LOW);
  else digitalWrite(ledPin, HIGH);
  // put your main code here, to run repeatedly:
Serial.println(analogRead(sensePin));
delay(500);
}
