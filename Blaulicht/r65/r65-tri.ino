void setup() {
  pinMode(7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(7, HIGH);  
  delay(37);                      
  digitalWrite(7, LOW);   
  delay(25);                     
  digitalWrite(7, HIGH); 
  delay(37);
  digitalWrite(7, LOW);   
  delay(25);  
  digitalWrite(7, HIGH);   
  delay(70);  
  digitalWrite(7, LOW);
  delay(296);
}
