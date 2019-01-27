// this line creates an integer named LED7 that refers to pin 11 on the Arduino 
int LED7 = 11;

void setup() {
  // the pinMode line of code has two configuration arguments, the first names the pin to LED7 which is the pin we want to affect and the second argument tells the LED7 integer to OUTPUT (send voltage out)
  pinMode(LED7, OUTPUT);

}

void loop() {
  // this first line writes the voltage to the integer LED7 using the function digitalWrite
  digitalWrite(LED7, HIGH);
  // this line sets a 100 millisecond delay and then runs the next line
  delay(100);
  // the next two lines do the same as the last two lines, except the light is run on LOW
  digitalWrite(LED7, LOW);
  delay(100);
    
}
