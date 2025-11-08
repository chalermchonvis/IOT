void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Catching Stick V5");
}
void loop()
{
   HoldAll();
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); 
  PlayGame();
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
}

void HoldAll() { Serial.println("HoldAll");  }
void Playgame()  { Serial.println("Playgame"); }
