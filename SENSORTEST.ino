int trigPin = 7;
int echoPin = 8;



void setup() {
  Serial.begin(9600); 
   pinMode(LED_BUILTIN, OUTPUT);
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);
 
 if((distance<=10)) 
  {
    digitalWrite(LED_BUILTIN, HIGH);
}
   else if(distance>10)
 {
     digitalWrite(LED_BUILTIN, LOW);
   }
}
