#define BT_RX_PIN 11
#define BT_TX_PIN 12
#define OUT_PIN 10

#include <SoftwareSerial.h>

SoftwareSerial bluetooth = SoftwareSerial(BT_RX_PIN, BT_TX_PIN);

void setup() {
  // Setup bluetooth
  bluetooth.begin(9600);
  
  // Setup output pin
  pinMode(OUT_PIN, OUTPUT); 
}

void loop() {
  // Get a random number between 0 and 10
  int randNumber = random(10);

  // Get quantity to display
  int quantity = randnumber + 5 * Receive();
  
  // Write quantity (max=255)
  analogWrite(OUT_PIN, quantity);
  
  // Delay 
  delay(200);
}

// Gets a measure (min=0, max=49)
int Receive() {
  if(!bluetooth.available()) {
    return 0;
  }
  
  return bluetooth.read();
}