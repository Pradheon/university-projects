// Name: Joshan Rai
// Class: CS110
// Assign.: Homework #04
// Synop.: State transition function, state changes until end of state has been reached.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int num_sec) { // Used for delaying parts of programs for x seconds
	int milli_sec = 1000 * num_sec;
	clock_t start_time = clock();
	while (clock() < start_time + milli_sec);
}

int main(void) {
	//int n[10] = { 9, 6, 7, 3, 1, 8, 2, 4, 10, 5 }; // Reference array for numbers
	srand(time(NULL));

	for (int i = 0; i < 5; i++) {
		int state = 1 + rand() % 10; // Random Number Generator (RNG)
		//printf("%d ", state); // Check RNG

		do { // Where all the fun stuff happens
			delay(1);
			printf("%d-->", state);
			switch (state) {
			case 1:
				state = 8;
				break;
			case 2:
				state = 4;
				break;
			case 3:
				state = 1;
				break;
			case 4:
				state = 10;
				break;
			case 5:
				state = 0;
				delay(2);
				printf("FINISHED!!\n");
				break;
			case 6:
				state = 7;
				break;
			case 7:
				state = 3;
				break;
			case 8:
				state = 2;
				break;
			case 9:
				state = 6;
				break;
			case 10:
				state = 5;
				break;
			}
		} while (state != 0);
	}
}