#include <string.h>
#include <stdio.h>
#include <inttypes.h>
#include "../Include/Sum.h"

int main()
{
	uint8_t a = 1;
	uint8_t b = 2;

	printf("The result of sum is: %" PRIu8 "", sum(a, b));
	return 0;
}