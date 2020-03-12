/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

const int redTraffic = 9;
const int yellowTraffic = 10;
const int greenTraffic = 11;

const int redPedestrian = 12;
const int yellowPedestrian = 13;

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


  // Red Pedestrian
  digitalWrite(redPedestrian, HIGH);   // turn the LED on (HIGH is the voltage level)

  //Red Traffic Light 2
  digitalWrite(redTraffic2, HIGH);
  
  //Green Traffic
  digitalWrite(greenTraffic, HIGH);
  delay(3000);
  digitalWrite(greenTraffic, LOW);


  //Yellow Traffic
  digitalWrite(yellowTraffic, HIGH);
  delay(1000);
  digitalWrite(yellowTraffic, LOW);
  digitalWrite(redTraffic2, LOW);
  digitalWrite(redPedestrian, LOW);    // turn the LED off by making the voltage 



  // Red lights & Yellow Pedestrian Crossing & Buzzer
  digitalWrite(redTraffic, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(yellowPedestrian, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(greenTraffic2, HIGH);   // turn the LED on (HIGH is the voltage level)

  tone(buzzer, 1000); // Send 1KHz sound signal...

  delay(3000);
  noTone(buzzer); // Send 1KHz sound signal...

  digitalWrite(redTraffic, LOW);    // turn the LED off by making the voltage 
  digitalWrite(yellowPedestrian, LOW);    // turn the LED off by making the voltage 
  digitalWrite(greenTraffic2, LOW);   // turn the LED on (HIGH is the voltage level)


  digitalWrite(yellowTraffic2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(yellowTraffic2, LOW);   // turn the LED on (HIGH is the voltage level)


}

void initializeTrafficLights() {
  pinMode(redTraffic, OUTPUT);
  pinMode(yellowTraffic, OUTPUT);
  pinMode(greenTraffic, OUTPUT);
}

void trafficLights() {
  digitalWrite(greenTraffic, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);
  digitalWrite(greenTraffic, LOW);    // turn the LED off by making the voltage LOW

  digitalWrite(yellowTraffic, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(yellowTraffic, LOW);    // turn the LED off by making the voltage LOW

  digitalWrite(redTraffic, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);
  digitalWrite(redTraffic, LOW);    // turn the LED off by making the voltage LOW
}

void initializePesdetrianLights() {
  //yellow
  pinMode(yellowPedestrian, OUTPUT);

  //red
  pinMode(redPedestrian, OUTPUT);
}


void initializeTrafficLights2() {
  //yellow
  pinMode(redTraffic2, OUTPUT);
  pinMode(yellowTraffic2, OUTPUT);
  pinMode(greenTraffic2, OUTPUT);

}

void pedestrianLights() {
  digitalWrite(redPedestrian, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);
  digitalWrite(redPedestrian, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(yellowPedestrian, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(yellowPedestrian, LOW);    // turn the LED off by making the voltage LOW
}

void initializeBuzzer() {
  //buzzer
  pinMode(8, OUTPUT);
}

//void buzzer() {
//  tone(buzzer, 1000); // Send 1KHz sound signal...
//  delay(1000);        // ...for 1 sec
//  noTone(buzzer);     // Stop sound...
//  delay(1000);        // ...for 1sec
//
//}
