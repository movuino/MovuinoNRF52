
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_RED, LOW);   
  delay(100);                     
  digitalWrite(LED_RED, HIGH);    
  delay(100);                      
  digitalWrite(LED_GREEN, LOW);   
  delay(100);                       
  digitalWrite(LED_GREEN,HIGH);   
  delay(200);    
  digitalWrite(LED_BLUE, LOW);  
  delay(100);                       
  digitalWrite(LED_BLUE, HIGH);    
  delay(100);    
}
