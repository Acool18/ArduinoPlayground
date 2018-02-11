void setup() {
  pinMode(7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(7, HIGH);  
  delay(150);                      
  digitalWrite(7, LOW);   
  delay(47);                     
  digitalWrite(7, HIGH); 
  delay(16);
  digitalWrite(7, LOW); 
  delay(24);
  digitalWrite(7, HIGH); 
  delay(16);
  digitalWrite(7, LOW); 
  delay(24);
  digitalWrite(7, HIGH); 
  delay(16);
  digitalWrite(7, LOW);   
  delay(186);
}
