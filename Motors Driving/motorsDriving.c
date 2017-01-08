/**
 * \file motorsDriving.c
 * \brief Fonctions de pilotage moteurs.
 * \author lefel13
 * \version 0.0.1
 * \date 08/01/2017
 *
 * Source des fonctions de pilotage des moteurs du robot.
 *
 */

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