// C++ code
//
int trigPin = 10;
int echoPin = 9;
long time;
int distance;
void setup()
{
  pinMode(10, OUTPUT); // Trig pin set as output
  pinMode(9, INPUT); // echo pin set as input
  Serial.begin(9600); // begins the communication
  
}

void loop()
{
  digitalWrite(10, LOW);// Trig pin set high(signal transmitted
  delayMicroseconds(2); // delay of 2 miroseconds
  
  digitalWrite(10, HIGH);
  delayMicroseconds(10); // delay of 10 microseconds
  digitalWrite(10, LOW);// Trig pin set as low
  
  // calculating the distance: 
  time = pulseIn(9, HIGH);
  distance = time * 0.034 / 2;
  
  // printing the distance: 
  Serial.print("Distance: ");
  Serial.println(distance);
}
