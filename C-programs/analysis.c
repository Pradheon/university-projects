//
//Analyzes examination result for 10 students and outputs passes, failures, and if 8+ students pass to print "bonus to instructor!".
#include <stdio.h>

int main(void) {
	int pass = 0; 
	int fail = 0;
	int studentCounter = 1;
	int result;

	while (studentCounter <= 10) {
		printf("Enter result: ");
		scanf_s("%d", &result);
		
		if (result == 1) {
			pass++;
		}
		else {
			fail++;
		}
		studentCounter = studentCounter++;
	}

	printf("Passed: %d\n", pass);
	printf("Failed: %d\n", fail);

	if (pass > 8) {
		printf("\nBonus to instructor!");
	}
	return 0;
}