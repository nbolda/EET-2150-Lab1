// declaring 8 varibales and assigning them to an LED
int LED0 = A5;
int LED1 = A4;
int LED2 = A3;
int LED3 = A2;
int LED4 = A1;
int LED5 = A0;
int LED6 = 10;
int LED7 = 11;

int SW0 = 2;
int SW1 = 3; 
int SW2 = 4; 
int SW3 = 5;
int SW4 = 6;
int SW5 = 7; 
int SW6 = 8;
int SW7 = 9; 
 
void setup() {
  // these lines set the mode for each pin and switch 
  pinMode(LED0, OUTPUT);
  pinMode(SW0, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(SW1, INPUT_PULLUP);

  pinMode(LED2, OUTPUT);
  pinMode(SW2, INPUT_PULLUP);

  pinMode(LED3, OUTPUT);
  pinMode(SW3, INPUT_PULLUP);

  pinMode(LED4, OUTPUT);
  pinMode(SW4, INPUT_PULLUP);

  pinMode(LED5, OUTPUT);
  pinMode(SW5, INPUT_PULLUP);

  pinMode(LED6, OUTPUT);
  pinMode(SW6, INPUT_PULLUP);

  pinMode(LED7, OUTPUT);
  pinMode(SW7, INPUT_PULLUP);
  
}

void loop() {
  // all these lines are if else statements that make the switches turn on the LEDs 
  if (!digitalRead(SW0))
  {
    digitalWrite(LED0, HIGH);  
  }
  else
  {
    digitalWrite(LED0, LOW);  
  }


  if (!digitalRead(SW1))
  {
    digitalWrite(LED1, HIGH);  
  }  
  else
  {
    digitalWrite(LED1, LOW);
  }


  if (!digitalRead(SW2))
  {
    digitalWrite(LED2, HIGH);  
  }  
  else
  {
    digitalWrite(LED2, LOW);
  }


  if (!digitalRead(SW3))
  {
    digitalWrite(LED3, HIGH);  
  } 
  else
  {
    digitalWrite(LED3, LOW);
  }


  if (!digitalRead(SW4))
  {
    digitalWrite(LED4, HIGH);  
  }  
  else
  {
    digitalWrite(LED4, LOW);
  }


  if (!digitalRead(SW5))
  {
    digitalWrite(LED5, HIGH);  
  }  
  else
  {
    digitalWrite(LED5, LOW);
  }


  if (!digitalRead(SW6))
  {
    digitalWrite(LED6, HIGH);  
  }  
  else
  {
    digitalWrite(LED6, LOW);
  }


  if (!digitalRead(SW7))
  {
    digitalWrite(LED7, HIGH);  
  }  
  else
  {
    digitalWrite(LED7, LOW);
  }
   
}
