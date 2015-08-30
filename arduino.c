int ledPin7 = 7;
int ledPin6 = 6;
int ledPin5 = 5;
int ledPin1 = 1;
int ledPin0 = 0;
int buttonPin = A0;
int delayValue = 100;

void setup() { 
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin0, OUTPUT); 
  pinMode(buttonPin, INPUT); 
}
void loop() { 
  int buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) { 
    digitalWrite(led_pin7, LOW);
    delay(delayValue);
    digitalWrite(led_pin7, HIGH);
    
    digitalWrite(led_pin6, LOW);
    delay(delayValue);
    digitalWrite(led_pin6, HIGH);
    
    digitalWrite(led_pin5, LOW);
    delay(delayValue);
    digitalWrite(led_pin5, HIGH);
    
    digitalWrite(ledPin1, LOW);
    delay(delayValue);
    digitalWrite(ledPin1, HIGH);
   
    digitalWrite(ledPin0, LOW);
    delay(delayValue);
    digitalWrite(ledPin0, HIGH);

    digitalWrite(ledPin1, LOW);
    delay(delayValue);
    digitalWrite(ledPin1, HIGH);
    
    digitalWrite(ledPin5, LOW);
    delay(delayValue);
    digitalWrite(ledPin5, HIGH);
    
    digitalWrite(ledPin6, LOW);
    delay(delayValue);
    digitalWrite(ledPin6, HIGH);
    
    digitalWrite(ledPin7, LOW);
    delay(delayValue);
    digitalWrite(ledPin7, HIGH); 
  }  
}