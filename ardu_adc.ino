int potPIN0 = A0;
int potValue = 0;


void setup() {
  // put your setup code here, to run once:
    
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);

    PORTD = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(potPIN0);


  if(potValue <= 127){
    PORTD = 0b00000001;
  }
  if(potValue <= 255 && potValue > 127){
    PORTD = 0b00000010;
  }
  if(potValue <= 383 && potValue > 255){
    PORTD = 0b00000100;
  }
  if(potValue <= 511 && potValue > 383){
    PORTD = 0b00001000;
  }
  if(potValue <= 639 && potValue > 511){
    PORTD = 0b00010000;
  }
  if(potValue <= 767 && potValue > 639){
    PORTD = 0b00100000;
  }
  if(potValue <= 895 && potValue > 767){
    PORTD = 0b01000000;
  }
  if(potValue <= 1023 && potValue > 895){
    PORTD = 0b10000000;
  }

}
