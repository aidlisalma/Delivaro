String buzzerstate;
const int buzzerPin = 9;
double temp;



void setup() 
{
  Serial.begin(9600) ;
  analogReference(INTERNAL);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  int valeur_brute = analogRead(A5);
 /* temp = temp * 0.48828125;
  Serial.print("Temperature: \n");
  Serial.print(temp); 
  Serial.print("*C");
  Serial.println();
  delay(1000); */
 

 float temperature_celcius = valeur_brute * (1.1 / 1023.0 * 100.0);
 int tmp = trunc(temperature_celcius);

  Serial.write(tmp / 10);

  Serial.write(tmp % 10);

  delay(3000);

 //Serial.println(temperature_celcius);
  if (Serial.available() > 0)
  {
    buzzerstate = Serial.readString();
 if(buzzerstate == "yes")
 {tone(buzzerPin, 1000);}
 else 
 {noTone(buzzerPin);}
  }





}
