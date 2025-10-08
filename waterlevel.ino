#define TRIG D5
#define ECHO D6
#define BUZZ D7
#define LED D8

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZZ, OUTPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duration = pulseIn(ECHO, HIGH);
  int distance = duration * 0.034 / 2;
  
  Serial.println(distance);
  
  if (distance < 10) {
    digitalWrite(BUZZ, HIGH);
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(BUZZ, LOW);
    digitalWrite(LED, LOW);
  }
  delay(1000);
}
