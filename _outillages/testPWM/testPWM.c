#include <stdio.h>
#include <stdlib.h>

#include <wiringPi.h>
#include <softPwm.h>

#define PIN_PWM0_WPI		26
#define PIN_PWM1_WPI		23
#define PIN_PWM0_BCM		12
#define PIN_PWM1_BCM		13
#define PIN_PWM0_P1			32
#define PIN_PWM1_P1			33

#define PWM_STOP		0
#define PWM_FULL		100
#define PWM_MID			(PWM_FULL / 2)


int main(int argc, char* argv[])
{
	int err = 0;
	printf("\n-----------\n");
	err = wiringPiSetup();
	printf("wiringPiSetup : %d\n", err);
/* 	err = wiringPiSetupGpio();
	printf("wiringPiSetupGpio : %d\n", err); */
	err = softPwmCreate(PIN_PWM0_WPI, PWM_STOP, PWM_FULL);
	printf("softPwmCreate : %d\n", err);
/* 	pinMode(PIN_PWM0_WPI, OUTPUT);
	printf("pinMode PWM0 (NO PWM)\n"); */
/* 	pinMode(PIN_PWM0_BCM, OUTPUT);
	printf("pinMode PWM0 (NO PWM)\n"); */
/* 	pinMode(PIN_PWM0_WPI, PWM_OUTPUT);
	printf("pinMode PWM0\n"); */
/* 	pinMode(PIN_PWM1_WPI, PWM_OUTPUT);
	printf("pinMode PWM1\n"); */
	printf("-----------\n\n");
	
	printf("\n-----------\n");
	printf("TEST PWM HW\n");
	
/* 	printf("\nApplying HIGH on PWM0 P1-%d\n", PIN_PWM0_P1);
	digitalWrite(PIN_PWM0_BCM, HIGH);
	printf("Press Enter to continue ...\n");
	getchar();
	printf("\nApplying LOW on PWM0 P1-%d\n", PIN_PWM0_P1);
	digitalWrite(PIN_PWM0_BCM, LOW);
	printf("Press Enter to continue ...\n");
	getchar(); */
	
/* 	printf("\nApplying HIGH on PWM0 P1-%d\n", PIN_PWM0_P1);
	digitalWrite(PIN_PWM0_WPI, HIGH);
	printf("Press Enter to continue ...\n");
	getchar();
	printf("\nApplying LOW on PWM0 P1-%d\n", PIN_PWM0_P1);
	digitalWrite(PIN_PWM0_WPI, LOW);
	printf("Press Enter to continue ...\n");
	getchar(); */
	
	printf("\nApplying %d on PWM0 P1-%d\n", PWM_FULL, PIN_PWM0_P1);
	softPwmWrite (PIN_PWM0_WPI, PWM_FULL);
	printf("Press Enter to continue ...\n");
	getchar();
	
	printf("\nApplying %d on PWM0 P1-%d\n", PWM_MID, PIN_PWM0_P1);
	softPwmWrite (PIN_PWM0_WPI, PWM_MID);
	printf("Press Enter to continue ...\n");
	getchar();
	
	printf("\nApplying %d on PWM0 P1-%d\n", PWM_STOP, PIN_PWM0_P1);
	softPwmWrite (PIN_PWM0_WPI, PWM_STOP);
	printf("Press Enter to continue ...\n");
	getchar();
	
/* 	printf("\nApplying %d on PWM0 P1-%d\n", PWM_FULL, PIN_PWM0_P1);
	pwmWrite(PIN_PWM0_WPI, PWM_FULL);
	printf("Press Enter to continue ...\n");
	getchar();
	
	printf("\nApplying %d on PWM0 P1-%d\n", PWM_MID, PIN_PWM0_P1);
	pwmWrite(PIN_PWM0_WPI, PWM_MID);
	printf("Press Enter to continue ...\n");
	getchar();
	
	printf("\nApplying %d on PWM0 P1-%d\n", PWM_STOP, PIN_PWM0_P1);
	pwmWrite(PIN_PWM0_WPI, PWM_STOP);
	printf("Press Enter to continue ...\n");
	getchar(); */
	
/* 	printf("\nApplying %d on PWM1 P1-%d\n", PWM_FULL, PIN_PWM1_P1);
	pwmWrite(PIN_PWM1_WPI, PWM_FULL);
	printf("Press Enter to continue ...\n");
	getchar();
	
	printf("\nApplying %d on PWM1 P1-%d\n", PWM_MID, PIN_PWM1_P1);
	pwmWrite(PIN_PWM1_WPI, PWM_MID);
	printf("Press Enter to continue ...\n");
	getchar();
	
	printf("\nApplying %d on PWM1 P1-%d\n", PWM_STOP, PIN_PWM1_P1);
	pwmWrite(PIN_PWM1_WPI, PWM_STOP);
	printf("Press Enter to continue ...\n");
	getchar(); */
	
	printf("-----------\n\n");
	
	printf("\n-----------\n");
	printf("TEST PWM SW\n\n");
	printf("Not implemented\n");
	printf("-----------\n\n");
	
	
	return EXIT_SUCCESS;
}