// My solution to the problem.
const int redTraffic = 9;
const int yellowTraffic = 10;
const int greenTraffic = 11;

const int redPedestrian = 12;
const int greenPedestrian = 13;

const int buzzer = 8;

const int redTraffic2 = 3;
const int yellowTraffic2 = 4;
const int greenTraffic2 = 5;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  initializeTrafficLights();
  initializePesdetrianLights();
  initializeBuzzer();
  initializeTrafficLights2();
}

// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(redPedestrian, HIGH);
  digitalWrite(greenTraffic, HIGH);
  digitalWrite(redTraffic2, HIGH);
  delay(3000);
  digitalWrite(greenTraffic, LOW);

  digitalWrite(yellowTraffic, HIGH);
  delay(1000);
  digitalWrite(yellowTraffic, LOW);
  digitalWrite(redTraffic2, LOW);
  digitalWrite(redPedestrian, LOW);

  digitalWrite(redTraffic, HIGH);
  digitalWrite(greenPedestrian, HIGH);
  digitalWrite(greenTraffic2, HIGH); 
  tone(buzzer, 400);
  delay(3000);
  
  digitalWrite(greenTraffic2, LOW); 
  digitalWrite(yellowTraffic2, HIGH); 
  digitalWrite(greenPedestrian, LOW);
  digitalWrite(redPedestrian, HIGH);
  noTone(buzzer);
  delay(1000);
  
  digitalWrite(yellowTraffic2, LOW);
  digitalWrite(redTraffic2, HIGH);
  digitalWrite(redTraffic, LOW);

}

void initializeTrafficLights() {
  pinMode(redTraffic, OUTPUT);
  pinMode(yellowTraffic, OUTPUT);
  pinMode(greenTraffic, OUTPUT);
}

void initializePesdetrianLights() {
  pinMode(greenPedestrian, OUTPUT);
  pinMode(redPedestrian, OUTPUT);
}


void initializeTrafficLights2() {
  //yellow
  pinMode(redTraffic2, OUTPUT);
  pinMode(yellowTraffic2, OUTPUT);
  pinMode(greenTraffic2, OUTPUT);

}

void initializeBuzzer() {
  //buzzer
  pinMode(8, OUTPUT);
}
