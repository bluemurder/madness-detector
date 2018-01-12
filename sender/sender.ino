#define BT_RX_PIN 11
#define BT_TX_PIN 12

#include <SoftwareSerial.h>

SoftwareSerial bluetooth = SoftwareSerial(BT_RX_PIN, BT_TX_PIN);

void setup() {
  // put your setup code here, to run once:
  bluetooth.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void SendNumber(int number){
  bluetooth.print(number);
}

