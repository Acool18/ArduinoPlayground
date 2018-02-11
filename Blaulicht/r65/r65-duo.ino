void setup() {
  pinMode(7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(7, HIGH);  
  delay(82);                      
  digitalWrite(7, LOW);   
  delay(30);                     
  digitalWrite(7, HIGH); 
  delay(82);
  digitalWrite(7, LOW);
  delay(296);
}
