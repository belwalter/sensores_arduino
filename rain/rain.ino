#define lluvia_sen A0

void setup ()
{
  Serial.begin(9600);
}

void loop ()
{
  int nivel = analogRead (lluvia_sen);
  Serial.print ( "Value Analog" );
  Serial.println (nivel);
 
  if (nivel> 900 && nivel < 1024 )
  {
    Serial.println ("low intensity");
  }
  if (nivel> 400 && nivel < 900 )
  {
    Serial.println ("moderate intensity");
  }
  if (nivel> 0 && nivel < 400 )
  {
    Serial.println ("high intensity");
  }
  delay ( 1000 );
}
