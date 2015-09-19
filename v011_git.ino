// JFPAYEUR
// acces 4 MCP3208
// Tested on arduino MEGA2560
//

#include "MCP3208.h"
#define CHIP_QTY 4

MCP3208 * MCP3208_TAB[CHIP_QTY];
MCP3208 MCP3208_CHIP_0(  13, 11, 12,  10);  // (CLOCK_, MOSI, MISO, CS);
MCP3208 MCP3208_CHIP_1(  13, 11, 12,  9);   // (CLOCK_, MOSI, MISO, CS);
MCP3208 MCP3208_CHIP_2(  13, 11, 12,  8);   // (CLOCK_, MOSI, MISO, CS);
MCP3208 MCP3208_CHIP_3(  13, 11, 12,  7);   // (CLOCK_, MOSI, MISO, CS);

void setup() {
  MCP3208_TAB[0] = &MCP3208_CHIP_0; 
  MCP3208_TAB[1] = &MCP3208_CHIP_1; 
  MCP3208_TAB[2] = &MCP3208_CHIP_2; 
  MCP3208_TAB[3] = &MCP3208_CHIP_3; 
  Serial.begin(9600);
}


void loop() {

  Serial.write(  MCP3208_TAB[0]->readADC(0)); //access chip #0 input #0
  Serial.write(  MCP3208_TAB[3]->readADC(7)); //access chip #3 input #7
}






