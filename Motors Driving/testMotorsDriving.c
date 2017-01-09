#include <stdio.h>
#include <unistd.h>
#include "motorsDriving.h"

int main(int argc, char* argv[])
{
	int 		step 	= 0;
	const int 	nbStep 	= 6;
	
	for(step = 0; step < nbStep; step++)
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
				sleep(1);
				break;
			case 3:
				printf("Move Back ...");
				motors_moveBack();
				sleep(1);
				break;
			case 4:
				printf("Move Right ...");
				motors_moveRight();
				sleep(1);
				break;
			case 5:
				printf("Move Left ...");
				motors_moveLeft();
				sleep(1);
				break;
			case 6:
				printf("Stop ...");
				motors_stop();
				sleep(1);
				break;
			default:
				printf("NO STEP");
				break;
		}
		
		printf("\tDone.\n\n");
	}

	return 0;
}