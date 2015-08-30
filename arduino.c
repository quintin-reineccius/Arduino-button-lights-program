int delay_value = 100;
int led_pin7 = 7;
int led_pin6 = 6;
int led_pin5 = 5;
int led_pin1 = 1;
int led_pin0 = 0;
int button_pin = A0;

void setup() { 
  pinMode(led_pin7, OUTPUT);
  pinMode(led_pin6, OUTPUT);
  pinMode(led_pin5, OUTPUT);
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin0, OUTPUT); 
  pinMode(button_pin, INPUT); 
}
void loop() { 
  int button_state = digitalRead(button_pin);
  if (button_state == HIGH) { 
    digitalWrite(led_pin7, LOW);
    delay(delay_value);
    digitalWrite(led_pin7, HIGH);
    
    digitalWrite(led_pin6, LOW);
    delay(delay_value);
    digitalWrite(led_pin6, HIGH);
    
    digitalWrite(led_pin5, LOW);
    delay(delay_value);
    digitalWrite(led_pin5, HIGH);
    
    digitalWrite(led_pin1, LOW);
    delay(delay_value);
    digitalWrite(led_pin1, HIGH);
   
    digitalWrite(led_pin0, LOW);
    delay(delay_value);
    digitalWrite(led_pin0, HIGH);

    digitalWrite(led_pin1, LOW);
    delay(delay_value);
    digitalWrite(led_pin1, HIGH);
    
    digitalWrite(led_pin5, LOW);
    delay(delay_value);
    digitalWrite(led_pin5, HIGH);
    
    digitalWrite(led_pin6, LOW);
    delay(delay_value);
    digitalWrite(led_pin6, HIGH);
    
    digitalWrite(led_pin7, LOW);
    delay(delay_value);
    digitalWrite(led_pin7, HIGH); 
  }  
}