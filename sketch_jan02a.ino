const int buttonAcornPin = 25;
const int buttonRandoPin = 33;

int buttonAcorn = 0;
int buttonRando = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(buttonAcornPin, INPUT);
  pinMode(buttonRandoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRando = digitalRead(buttonRandoPin);
  buttonAcorn = digitalRead(buttonAcornPin);
  if (buttonRando == HIGH) {
    Serial.println("Rando Pressed");
  }
  else if (buttonAcorn == HIGH) {
    Serial.println("Acorn Pressed");
  }
  else {
    Serial.println("None Pressed");
  }
  delay(100);
}
