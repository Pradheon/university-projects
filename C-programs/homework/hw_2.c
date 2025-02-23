//Name: Joshan Rai
//Course: CS110
//Assignement: Homework #02, Letter guessing game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//#include <conio.h>

int main(int argc, char* argv[])
{
	char randChar = ' ';
	int counter = 0;
	int randNum = 0;

	//Provide random seed for generator
	srand(time(NULL));
	for (counter = 0; counter < 1; counter++)
	{
		//Random number 0-26
		randNum = rand() % 26;

		randNum = randNum + 97;

		randChar = (char)randNum;

		//printf("rand: %c\n", randChar); used to check CPU letter.
	}

	//Get user input
	char guess;
	printf("Enter a character between A-Z: ");
	guess = getchar();
	printf("Guessed: %c\n", guess);
	
	//Compare CPU and Player guesses
	if (guess == randChar)
	{
		printf("You guessed the correct letter!");
	}
	else
	{
		printf("You are wrong, the computer letter is: %c", randChar);
	}
}