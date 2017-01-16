#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "wiringPi.h"

#define FILE_NAME_LEN			256
#define WIRING_PI_MAX_PIN_ID	16

int main(int argc, char* argv[])
{
	struct tm 	currentTime;
	time_t 		currentSeconds;
	
	FILE*		recordFile					= NULL;
	char		fileName[FILE_NAME_LEN];
	int			closeErr;
	
	currentSeconds = time(NULL);
	currentTime = *localtime(&currentSeconds);
	
	sprintf(fileName, "GPIO-identification_%d-%d-%d_%d-%d-%d.txt", 
		currentTime.tm_mday, currentTime.tm_mon+1, currentTime.tm_year+1900, 
		currentTime.tm_hour, currentTime.tm_min, currentTime.tm_sec);
		
	recordFile = fopen(fileName, "a");
	
	if(recordFile != NULL)
	{
		printf("[!] File %s opened.\n", fileName);
	}
	else
	{
		printf("[!] Error fopen.\n");
		return EXIT_FAILURE;
	}
	
	wiringPiSetup();
	printf("[!] Wiring Pi set up.\n");
	
	closeErr = fclose(recordFile);
		if(closeErr == 0)
	{
		printf("[!] File %s closed.\n", fileName);
	}
	else
	{
		printf("[!] Error fclose.\n");
		return EXIT_FAILURE;
	}
	
	return EXIT_SUCCESS;
}