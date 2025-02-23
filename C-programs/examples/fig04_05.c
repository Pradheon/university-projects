//Fig. 4.5: fig04_05.c
//Summation with for.
#include <stdio.h>
#include <limits.h>

int main(void) {
	unsigned int sum = 0;
	for (unsigned int i = 2; i <= 100; sum += i, i+=2) {

	}
	printf("the sum=%d\n", sum);
	return 0;
}