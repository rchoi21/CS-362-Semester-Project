/*
 * Alex Bonilla
 * Prototype description: When pressing a button, a value representing either a dollar, quarter, 
 * nickel, or penny will be displayed. These buttons can be pressed and add up continuously.
 * Resources: https://www.arduino.cc/reference/en/language/variables/data-types/float/
 *            https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
 */

// Button set up
const int b1 = 2;
const int b2 = 4;
const int b3 = 6;
const int b4 = 10;
const int b5 = 12;

// Button state set up
int b1_state = 0;
int b2_state = 0;
int b3_state = 0;
int b4_state = 0;
int b5_state = 0;

// Used for errors
int prev1 = 0;
int prev2 = 0;
int prev3 = 0;
int prev4 = 0;
int prev5 = 0;

// Money value set up
const int dollars = 1;
const float quarter = 0.25;
const float dime = 0.1;
const float nickel = 0.05;
const float penny = 0.01;
float total = 0;


void setup() {
  Serial.begin(9600); // So I can print my results
  
  pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
  pinMode(b3, INPUT_PULLUP);
  pinMode(b4, INPUT_PULLUP);
  pinMode(b5, INPUT_PULLUP);

}

void loop() {
  // Button read set up
   b1_state = digitalRead(b1);
   b2_state = digitalRead(b2);
   b3_state = digitalRead(b3);
   b4_state = digitalRead(b4);
   b5_state = digitalRead(b5);

  // Adds a dollar
  if(b1_state != prev1){                    // Prevents infinite printing
    if(b1_state == HIGH){                   // When NOT pressed
      //Do nothing
    } else{                                 // When pressed
        total += dollars;
        Serial.println(total);
        Serial.println(" ");
    } delay(50);
  }

  // Adds a quarter
  if(b2_state != prev2){
    if(b2_state == HIGH){
      //Do nothing
    } else{
        total += quarter;
        Serial.println(total);
        Serial.println(" ");
    } delay(50);
  }

  // Adds a dime
  if(b3_state != prev3){
    if(b3_state == HIGH){
      //Do nothing
    } else{
        total += dime;
        Serial.println(total);
        Serial.println(" ");
    } delay(50);
  }

  // Adds a nickel
  if(b4_state != prev4){
    if(b4_state == HIGH){
      //Do nothing
    } else{
        total += nickel;
        Serial.println(total);
        Serial.println(" ");
    } delay(50);
  }

  // Adds a penny
  if(b5_state != prev5){
    if(b5_state == HIGH){
      //Do nothing
    } else{
        total += penny;
        Serial.println(total);
        Serial.println(" ");
    } delay(50);
  }

  // Prevents infite looping
  prev1 = b1_state;
  prev2 = b2_state;
  prev3 = b3_state;
  prev4 = b4_state;
  prev5 = b5_state;


   
}
