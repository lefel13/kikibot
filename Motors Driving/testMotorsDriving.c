#include <stdio.h>
#include "motorsDriving.h"

int main(int argc, char* argv[])
{
	printf("Calling shared library ...\n");
	hello();
	printf("Finish !\n");
	return 0;
}