// this line creates an integer named LED5 and SW0 that refers to pin A5 and Switch 2 on the Arduino
int LED0 = A5;
int SW0 = 2;

void setup() {
  // these two pinMode lines are for configuring LED 0 and Switch 0 to input or output
  pinMode(LED0, OUTPUT);
  // the function INPUT_PULLUP indicates there is a resistor on the Arduino
  pinMode(SW0, INPUT_PULLUP);
  
}

void loop() {
  // this is an if else staemtent
   if (!digitalRead(SW0))    
   {     
     digitalWrite(LED0, HIGH);   
   }
   
}
