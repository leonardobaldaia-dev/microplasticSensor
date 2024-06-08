const int sensorPin = A0;    
const int solarPin = A1;     
const int ledPin = 9;        

int sensorValue = 0;         
int solarValue = 0;          
int sensorMin = 1023;        
int sensorMax = 0;           

void setup() {
  
  Serial.begin(9600);
  
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);

  
  while (millis() < 5000) {
    sensorValue = analogRead(sensorPin);

    if (sensorValue > sensorMax) {
      sensorMax = sensorValue;
    }

    if (sensorValue < sensorMin) {
      sensorMin = sensorValue;
    }

    delay(50);
  }

  digitalWrite(LED_BUILTIN, LOW);

  Serial.print("Calibração completa - Valor Mínimo: ");
  Serial.println(sensorMin);
  Serial.print("Calibração completa - Valor Máximo: ");
  Serial.println(sensorMax);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  solarValue = analogRead(solarPin); 

  
  sensorValue = map(sensorValue, sensorMin, sensorMax, 0, 255);

  
  sensorValue = constrain(sensorValue, 0, 255);

 
  analogWrite(ledPin, sensorValue);

  
  Serial.print("Valor do Sensor: ");
  Serial.print(sensorValue);
  Serial.print(" | Valor do Painel Solar: ");
  Serial.println(solarValue);
  
  delay(50);
}