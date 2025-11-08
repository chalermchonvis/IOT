void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Catching Stick V5");
}
void loop()
{
 if (Serial.available() > 0) {
    
    // read the incoming byte:
      String inpKey = Serial.readStringUntil('\n');
      Serial.print(" Press Switch  ");   
     Serial.println(inpKey);
     if ( inpKey.substring(0,1) == "h") {  HoldAll();  }
     if ( inpKey.substring(0,1) == "p") {  PlayGame();  }
     }
}

void HoldAll() { Serial.println("HoldAll");  }
void PlayGame()  { Serial.println("Playgame"); }
