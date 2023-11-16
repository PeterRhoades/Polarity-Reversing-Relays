/*Peter Rhoades
Saturday 04/02/21
Polarity_Reversing_Relay_2_Relays_to_LED®
*/

#include <RelayModule.h>

int ledPinRv = 11;//Reversing Relay working  
int ledPinR1 = 10;//Relay1 working 
int ledPinR2 = 9;//Relay2 working 
int delayPeriod = 2000;
int delayPeriodR1 = 100;
int delayPeriodR2 = 100;


void setup() 
  {
 pinMode(ledPinRv, OUTPUT);//Power Reversing Relay 
 pinMode(ledPinR1, OUTPUT);//Power Relay1
 pinMode(ledPinR2, OUTPUT);//Power Relay2 
  }

void loop() 
  {
  
  digitalWrite(ledPinRv, HIGH); delay(delayPeriod); digitalWrite(ledPinR1, HIGH); delay(delayPeriodR1);  digitalWrite(ledPinR2, HIGH); delay(delayPeriodR2);//Turn RV R1 and R2 on, then the hold on for (delayPeriod)
  digitalWrite(ledPinRv, LOW);  delay(delayPeriod); digitalWrite(ledPinR1, LOW);  delay(delayPeriodR1);  digitalWrite(ledPinR2, LOW);  delay(delayPeriodR2);//Turn RV R1 and R2 on, then the hold on for (delayPeriod)
  
  }
