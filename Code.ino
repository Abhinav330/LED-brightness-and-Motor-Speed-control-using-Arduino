int x , y ;
void setup() {
   Serial.begin(9600);  
   pinMode(3 , OUTPUT);
   pinMode(A0 , INPUT);
   pinMode(5 , OUTPUT);
  }

void loop() 
{
  x = analogRead(A0);
  y = map(x ,0 , 1023 , 0 , 225);
  Serial.println(y);
  
  analogWrite(3,y);
  analogWrite(5,y);
  delay(10);
} 
