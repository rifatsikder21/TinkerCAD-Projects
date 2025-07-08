int temp = A0;
float Temp_C;
float volt;
float read;
float Temp_F;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  read = analogRead(A0);
  Serial.print("Readings: ");
  Serial.println(read);
  
  volt = read*5/1024; // diving  by 1024 as data pin is betn 0 to 1024 and 5 is for 5v
  Serial.print("Voltage: ");
  Serial.println(volt);
  
  Temp_C = 100*(volt-0.5); // CONVERTING FROM 10mv per degree with .5v offset
  Serial.print("Temperature in Celcius: ");
  Serial.println(Temp_C);
  
  Temp_F=(Temp_C *9/5)+32;
  Serial.print("Temperature in Farenheit: ");
  Serial.println(Temp_F);
  delay(3000);
}
