#include <stdio.h>

#include "motorsDriving.h"
#include "wiringPi.h"

void hello(void)
{
	printf("Hello World !\n");
	
	printf("\n--- Test of WiringPi ---\n\n");
	
	printf("Setup ...\n");
	wiringPiSetup();
	
	printf("Pin Mode ...\n");
	pinMode (PIN_LED, OUTPUT);
	
	printf("LED ON ...\n");
	digitalWrite(PIN_LED, HIGH);
	delay(3000);
	
	printf("LED OFF ...\n");
	digitalWrite(PIN_LED, LOW);
	
	printf("\n---------- End ----------\n");
}