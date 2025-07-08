float temp;
float vout;
float vout1;
int LED = 8; 
int gas;
int buzz = 7;

void setup()
{
 pinMode(A0,INPUT);
 pinMode(A1,INPUT);
 pinMode(LED,OUTPUT);
 pinMode(buzz,OUTPUT);
 Serial.begin(9600);
}

void loop()
{
  vout=analogRead(A1);
  vout1=(vout/1023)*5000;
  temp=(vout1-500)/10;
  gas=analogRead(A0);
  
  if (temp>=80)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
  if (gas>=100)
  {
    digitalWrite(buzz,HIGH);
  }
  else
  {
    digitalWrite(buzz,LOW);
  }
  Serial.print("in DegreeC= ");
  Serial.print(" ");
  Serial.print(temp);
  Serial.print("\t");
  Serial.print("gas= ");
  Serial.print(" ");
  Serial.print(gas);
  Serial.println();
  delay(1000);
}
