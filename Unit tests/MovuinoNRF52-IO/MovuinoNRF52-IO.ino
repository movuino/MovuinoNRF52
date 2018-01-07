/*
 * 0 or A0 -> P0.31 digital ok analog ok PWM ok
 * 1 or A1 -> P0.30 digital ok analog ok PWM ok 
 * 2 or A2 -> P0.29 battery monitor A2 OK
 * 3 or A3 -> P0.28 digital ok analog ok PWM ok
 * 4 or A4 -> P0.02 digital ok analog ok PWM ok 
 * 5 or A5 -> P0.03 digital ok analog ok PWM ok
 * 6 or A6 -> P0.04 digital ok analog ok PWM ok
 * 7 or A7 -> P0.05 digital ok analog ok PWM ok
 * 8 -> P0.23 digital ok PWM ok
 * 9 -> P0.22 digital ok PWM ok
 * 10 ->  P0.8 digital ok PWM ok
 * 11 or RED_LED ->  P0.25 digital ok PWM ok
 * 12 ->  P0.26 digital ok PWM ok
 * 13 ->  P0.27  Vibration  PWM ok
 * 
 * 20 -> P0.24 INTerrupt MPU
 * 21 -> P0.20 Blue led digital ok NO PWM -> TODO change those pins for pwm pins
 * 22 -> P0.19 Green led digital ok NO PWM -> TODO change those pins for pwm pins 
 * 
 *
 */

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(RED_LED, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(RED_LED, HIGH);   // turn the LED on (HIGH is the voltage level) 
  //int val=analogRead(A6);
  digitalWrite(12, HIGH);
  delay(200);                       // wait for a second
  digitalWrite(RED_LED, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(12, LOW);
  delay(200);                       // wait for a second
  Serial.print("I am groot ! val:");
  //Serial.println(val);
}
