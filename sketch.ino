
const int trigPin = 13;
const int echoPin = 14;
const int ledPin = 26;
const int buzzerPin = 25;

const float seuil = 20.0;

float mesurerDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duree = pulseIn(echoPin, HIGH, 30000);

  if (duree == 0) {
    return -1;
  }

  return duree * 0.0343 / 2.0;
}

void setup() {
  Serial.begin(115200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  digitalWrite(ledPin, LOW);
  digitalWrite(buzzerPin, LOW);

  Serial.println("Robot a decision intelligente");
  Serial.println("Seuil : 20 cm");
}

void loop() {
  float distance = mesurerDistance();

  if (distance < 0) {
    Serial.println("Aucune mesure valide");
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  } 
  else {
    Serial.print("Distance : ");
    Serial.print(distance, 1);
    Serial.println(" cm");

    if (distance <= seuil) {
      digitalWrite(ledPin, HIGH);
      tone(buzzerPin, 1000);

      Serial.println("ALERTE : Objet trop proche !");
    } 
    else {
      digitalWrite(ledPin, LOW);
      noTone(buzzerPin);

      Serial.println("Situation normale");
    }
  }

  delay(500);
}