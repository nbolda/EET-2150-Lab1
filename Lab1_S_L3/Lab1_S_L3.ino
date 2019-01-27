// declaring 8 variables and assigning them to an LED
int LED0 = A5;
int LED1 = A4;
int LED2 = A3;
int LED3 = A2;
int LED4 = A1;
int LED5 = A0;
int LED6 = 10;
int LED7 = 11;

void setup() {
    // sets each pinMode configuration 
    pinMode(LED0, OUTPUT);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);
    pinMode(LED5, OUTPUT);
    pinMode(LED6, OUTPUT);
    pinMode(LED7, OUTPUT);
        
}


void loop() {
  // all these lines turn on a specifc pairs of LEDs in order with a delay of 100 miliseconds
  digitalWrite(LED0, HIGH); 
  digitalWrite(LED7, HIGH);
  delay(100);

  digitalWrite(LED1, HIGH); 
  digitalWrite(LED6, HIGH);
  delay(100);

  digitalWrite(LED2, HIGH); 
  digitalWrite(LED5, HIGH);
  delay(100);

  digitalWrite(LED3, HIGH); 
  digitalWrite(LED4, HIGH);
  delay(100);

  // all these lines turn off a specifc pairs of LEDs in order with a delay of 100 miliseconds
  digitalWrite(LED3, LOW); 
  digitalWrite(LED4, LOW);
  delay(100);
  
  digitalWrite(LED2, LOW); 
  digitalWrite(LED5, LOW);
  delay(100);

  digitalWrite(LED1, LOW); 
  digitalWrite(LED6, LOW);
  delay(100);

  digitalWrite(LED0, LOW); 
  digitalWrite(LED7, LOW);
  delay(100);

}
