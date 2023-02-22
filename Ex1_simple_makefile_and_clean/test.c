
#include "stdint.h"
#include "string.h"
#include <stdio.h>
#include <inttypes.h>

int main()
{

	uint8_t a = 1;
	uint8_t b = 2;

	printf("The result of sum is: %" PRIu8 "", (a + b));
	return 0;
}