/*
 * using a led  and a photosensor, we check to see if an object passes through the system, if the photonsensor detects a drop in light, it asks how much money you would like to insert.
 * ME alumni (Joseph,Becky,Alex)
 * https://arduinogetstarted.com/tutorials/arduino-light-sensor
 */

// constants won't change
const int lightPin = A0; // light sensor pin on A0
const int led          = 3;  // LED pin on 3
const int ANALOG_THRESHOLD = 300;


void setup() {
  pinMode(led, OUTPUT); // set arduino pin to output mode
  digitalWrite(led,HIGH);
  Serial.begin(9600);
}

void loop() {
  int lightVal = analogRead(lightPin); // read the input
  Serial.println(lightVal);
  
  if(lightVal > ANALOG_THRESHOLD){}
    //do nothing
  else{
     Serial.println("How much would do you want to insert");
     delay(1000);
    }
   
}
