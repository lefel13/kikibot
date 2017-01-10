#include <stdio.h>
#include <unistd.h>
#include "motorsDriving.h"

int main(int argc, char* argv[])
{
	int 		step 	= 0;
	const int 	nbStep 	= 6;
	const int 	delay	= 2;	/* en s */
	
	for(step = 1; step <= nbStep; step++)
	{
		printf("Step %d : ", step);
		
		switch(step)
		{
			case 1:
				printf("Init ...");
				motors_init();
				break;
			case 2:
				printf("Move Forward ...");
				motors_moveForward();
				break;
			case 3:
				printf("Move Back ...");
				motors_moveBack();
				break;
			case 4:
				printf("Move Right ...");
				motors_moveRight();
				break;
			case 5:
				printf("Move Left ...");
				motors_moveLeft();
				break;
			case 6:
				printf("Stop ...");
				motors_stop();
				break;
			default:
				printf("NO STEP");
				break;
		}
		
		sleep(delay);
		
		printf("\tDone.\n\n");
	}

	return 0;
}