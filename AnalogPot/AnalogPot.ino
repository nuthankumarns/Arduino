void setup() {
  // put your setup code here, to run once:
    // initialize serial communications at 9600 bps:
  Serial.begin(9600);

}
const int potPin = A0; 

void loop() {

  // put your main code here, to run repeatedly:
Serial.println(analogRead(potPin));
delay(100);
}
