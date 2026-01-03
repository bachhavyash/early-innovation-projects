// Gas Leakage Detection System
// Simple Arduino C Code

int gasSensor = A0;   // Gas sensor connected to A0
int buzzer = 8;       // Buzzer pin
int led = 9;          // LED pin

int gasValue = 0;
int threshold = 400;  // Gas limit value (can be adjusted)

void setup()
{
  pinMode(gasSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);   // For monitoring values
}

void loop()
{
  gasValue = analogRead(gasSensor);  // Read sensor value
  Serial.println(gasValue);

  if (gasValue > threshold)
  {
    digitalWrite(buzzer, HIGH);  // Turn ON buzzer
    digitalWrite(led, HIGH);     // Turn ON LED
  }
  else
  {
    digitalWrite(buzzer, LOW);   // Turn OFF buzzer
    digitalWrite(led, LOW);      // Turn OFF LED
  }

  delay(500);   // Delay for stability
}
