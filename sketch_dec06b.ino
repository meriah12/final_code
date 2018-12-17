int horizontal = A1;
int vertical = A0;

int red_pin1 = 8;
int green_pin1 = 9;
int blue_pin1 = 10;
int red_pin2 = 11;
int green_pin2 = 12;
int blue_pin2 = 13;
int red_pin3 = 25;
int green_pin3 = 26;
int blue_pin3 = 27;
int red_pin4 = 28;
int green_pin4 = 29;
int blue_pin4 = 30;


int led1 = 31;
int led2 = 32;
int led3 = 39;
int led4 = 34;
int led5 = 35;
int led6 = 36;
int led7 = 37;
int led8 = 38;
int pot = A2;

int button1 = 48;
int button2 = 50;
int button3 = 51;
int button4 = 52;
int vibrate = 53;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(horizontal, INPUT);
  pinMode(vertical, INPUT);
 
  pinMode(red_pin1, OUTPUT);
  pinMode(green_pin1, OUTPUT);
  pinMode(blue_pin1, OUTPUT);
  pinMode(red_pin2, OUTPUT);
  pinMode(green_pin2, OUTPUT);
  pinMode(blue_pin2, OUTPUT);
  pinMode(red_pin3, OUTPUT);
  pinMode(green_pin3, OUTPUT);
  pinMode(blue_pin3, OUTPUT);
  pinMode(red_pin4, OUTPUT);
  pinMode(green_pin4, OUTPUT);
  pinMode(blue_pin4, OUTPUT);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  
  pinMode(52, INPUT);
  pinMode(50, INPUT);
  pinMode(51, INPUT);
  pinMode(48, INPUT);
  pinMode(53, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int horz_data = analogRead(horizontal);
  int vert_data = analogRead(vertical);

  int h_map = map(horz_data, 0, 1023, 0, 255);
  int v_map = map(vert_data, 0, 1023, 0, 255); 

  if(h_map == 130 ||131 && v_map == 131){
    digitalWrite(blue_pin1, HIGH);
    digitalWrite(blue_pin2, HIGH);
    digitalWrite(blue_pin3, HIGH);
    digitalWrite(blue_pin4, HIGH);
    digitalWrite(red_pin1, HIGH);
    digitalWrite(red_pin2, HIGH);
    digitalWrite(red_pin3, HIGH);
    digitalWrite(red_pin4, HIGH);
    digitalWrite(green_pin1, LOW);
    digitalWrite(green_pin2, LOW);
    digitalWrite(green_pin3, LOW);
    digitalWrite(green_pin4, LOW);
  }
  if(h_map == 131 && v_map == 125){
    digitalWrite(blue_pin1, HIGH);
    digitalWrite(blue_pin2, HIGH);
    digitalWrite(blue_pin3, HIGH);
    digitalWrite(blue_pin4, HIGH);
    digitalWrite(red_pin1, HIGH);
    digitalWrite(red_pin2, HIGH);
    digitalWrite(red_pin3, HIGH);
    digitalWrite(red_pin4, HIGH);
    digitalWrite(green_pin1, LOW);
    digitalWrite(green_pin2, LOW);
    digitalWrite(green_pin3, LOW);
    digitalWrite(green_pin4, LOW);
  }
  if(h_map == 131 ||131 && v_map == 133){
    digitalWrite(blue_pin1, HIGH);
    digitalWrite(blue_pin2, HIGH);
    digitalWrite(blue_pin3, HIGH);
    digitalWrite(blue_pin4, HIGH);
    digitalWrite(red_pin1, HIGH);
    digitalWrite(red_pin2, HIGH);
    digitalWrite(red_pin3, HIGH);
    digitalWrite(red_pin4, HIGH);
    digitalWrite(green_pin1, LOW);
    digitalWrite(green_pin2, LOW);
    digitalWrite(green_pin3, LOW);
    digitalWrite(green_pin4, LOW);
  }
  if(h_map == 3 ||131 && v_map == 113){
    digitalWrite(blue_pin1, LOW);
    digitalWrite(blue_pin2, LOW);
    digitalWrite(blue_pin3, LOW);
    digitalWrite(blue_pin4, LOW);
    digitalWrite(red_pin1, HIGH);
    digitalWrite(red_pin2, HIGH);
    digitalWrite(red_pin3, HIGH);
    digitalWrite(red_pin4, HIGH);
    digitalWrite(green_pin1, LOW);
    digitalWrite(green_pin2, LOW);
    digitalWrite(green_pin3, LOW);
    digitalWrite(green_pin4, LOW);
  }
  if(h_map == 255){
    digitalWrite(blue_pin1, HIGH);
    digitalWrite(blue_pin2, HIGH);
    digitalWrite(blue_pin3, HIGH);
    digitalWrite(blue_pin4, HIGH);
    digitalWrite(red_pin1, LOW);
    digitalWrite(red_pin2, LOW);
    digitalWrite(red_pin3, LOW);
    digitalWrite(red_pin4, LOW);
    digitalWrite(green_pin1, LOW);
    digitalWrite(green_pin2, LOW);
    digitalWrite(green_pin3, LOW);
    digitalWrite(green_pin4, LOW);
  }
  if(h_map == 0){
    digitalWrite(blue_pin1, LOW);
    digitalWrite(blue_pin2, LOW);
    digitalWrite(blue_pin3, LOW);
    digitalWrite(blue_pin4, LOW);
    digitalWrite(red_pin1, HIGH);
    digitalWrite(red_pin2, HIGH);
    digitalWrite(red_pin3, HIGH);
    digitalWrite(red_pin4, HIGH);
    digitalWrite(green_pin1, LOW);
    digitalWrite(green_pin2, LOW);
    digitalWrite(green_pin3, LOW);
    digitalWrite(green_pin4, LOW);
  }
  if(v_map == 0){
    digitalWrite(blue_pin1, LOW);
    digitalWrite(blue_pin2, LOW);
    digitalWrite(blue_pin3, LOW);
    digitalWrite(blue_pin4, LOW);
    digitalWrite(red_pin1, LOW);
    digitalWrite(red_pin2, LOW);
    digitalWrite(red_pin3, LOW);
    digitalWrite(red_pin4, LOW);
    digitalWrite(green_pin1, HIGH);
    digitalWrite(green_pin2, HIGH);
    digitalWrite(green_pin3, HIGH);
    digitalWrite(green_pin4, HIGH);
  }
  if(v_map == 255){
    digitalWrite(blue_pin1, HIGH);
    digitalWrite(blue_pin2, HIGH);
    digitalWrite(blue_pin3, HIGH);
    digitalWrite(blue_pin4, HIGH);
    digitalWrite(red_pin1, HIGH);
    digitalWrite(red_pin2, HIGH);
    digitalWrite(red_pin3, HIGH);
    digitalWrite(red_pin4, HIGH);
    digitalWrite(green_pin1, HIGH);
    digitalWrite(green_pin2, HIGH);
    digitalWrite(green_pin3, HIGH);
    digitalWrite(green_pin4, HIGH);
  }

  int pot_val = analogRead(pot);
  int brightness = map(pot_val, 0, 830, 0, 255);
  analogWrite(led1, brightness);
  analogWrite(led2, brightness);
  analogWrite(led3, brightness);
  analogWrite(led4, brightness);
  analogWrite(led5, brightness);
  analogWrite(led6, brightness);
  analogWrite(led7, brightness);
  analogWrite(led8, brightness);
  delay(100);

  Serial.println(pot_val);

  int but_val = digitalRead(button1);
  int but_val2 = digitalRead(button2);
  int but_val3 = digitalRead(button3);
  int but_val4 = digitalRead(button4);

  if(but_val == HIGH){
    digitalWrite(vibrate, HIGH);
  }
  else if(but_val == LOW){
    digitalWrite(vibrate, LOW);
  }
  if(but_val2 == HIGH){
    digitalWrite(vibrate, HIGH);
  }
  else if(but_val2 == LOW){
    digitalWrite(vibrate, LOW);
  }
  if(but_val3 == HIGH){
    digitalWrite(vibrate, HIGH);
  }
  else if(but_val3 == LOW){
    digitalWrite(vibrate, LOW);
  }
  if(but_val4 == HIGH){
    digitalWrite(vibrate, HIGH);
  }
  else if(but_val4 == LOW){
    digitalWrite(vibrate, LOW);
  }

}
