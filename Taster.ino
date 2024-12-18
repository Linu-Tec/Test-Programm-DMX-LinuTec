// ------------------Taster-----------------------
int TasteUP = 4,    // Pin vom Taster
    StatusTasteUP,    // Zustand vom Taster
    TasteDOWN = 5,
    StatusTasteDOWN,
    TasteMODE = 6,
    StatusTasteMODE,
    TasteENTER = 7,
    StatusTasteENTER;

void TasterAuslesen(){
  StatusTasteUP = digitalRead(TasteUP);
  StatusTasteDOWN = digitalRead(TasteDOWN);
  StatusTasteMODE = digitalRead(TasteMODE);
  StatusTasteENTER = digitalRead(TasteENTER);

  // Werte Invertieren
  StatusTasteUP = !StatusTasteUP;
  StatusTasteDOWN = !StatusTasteDOWN;
  StatusTasteMODE = !StatusTasteMODE;
  StatusTasteENTER = !StatusTasteENTER;

  Serial.print("UP"); Serial.print("\t");
  Serial.print("DOWN"); Serial.print("\t");
  Serial.print("MODE"); Serial.print("\t");
  Serial.print("Enter"); Serial.println("\t");
  Serial.print(StatusTasteUP); Serial.print("\t");
  Serial.print(StatusTasteDOWN); Serial.print("\t");
  Serial.print(StatusTasteMODE); Serial.print("\t");
  Serial.print(StatusTasteENTER); Serial.println("\t");

  delay(100);
}


void setup() {
  Serial.begin(9600);
  // ------------------Taster-----------------------
  pinMode(TasteUP, INPUT_PULLUP);
  pinMode(TasteDOWN, INPUT_PULLUP);
  pinMode(TasteMODE, INPUT_PULLUP);
  pinMode(TasteENTER, INPUT_PULLUP);
}

void loop() {
  TasterAuslesen();
}
