const int trigPin = 13;
const int echoPin = 12;

void setup() {
Serial.begin(9600);
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(8, OUTPUT);
}
void motorState(int state)
{}
void loop()
{      
int duration, distance;
 {
digitalWrite(trigPin, HIGH); 
delay(1);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
if (distance <= 50 && distance >= 0) 
{
 motorState(LOW);
digitalWrite(8,LOW);
   delay(1000);
}
else {
   motorState(HIGH);
digitalWrite(8,HIGH);
delay(1000);
} 
 }}
