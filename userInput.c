#include <stdio.h>

// Header to use string length function
#include <string.h>

int main()
{
	/*
		User Input
	*/

	// scanf
	// scanf cannot read white spaces
	// "&" must be used to display input varibales

	int age = 0;

	// '\0' = Null terminator
	// Used to clear the variable
	char gradeLetter = '\0';

	char name[30] = "";

	printf("Please type in your age: ");
	scanf("%d", &age);

	// Add space to deal with input buffer
	// The new line that is added after taking an input
	printf("Enter your letter grade: ");
	scanf(" %c", &gradeLetter);

	// To clear new line buffer with fgets
	getchar();

	// Since scanf can't read white spaces, it won't print anything after a space
	// This is when "fgets" comes into play
	printf("Enter your name: ");
	// fgets syntax
	// variable - size of variable - standard input 
	fgets(name, 30, stdin);
	// To remove new line created by fgets
	// Add a null terminator at the end of the input
	name[strlen(name) - 1] = '\0';

	printf("You are %d years old.\n", age);
	printf("You've reached unc status!\n");

	printf("Your grade letter is: %c\n", gradeLetter);

	printf("Your name is: %s\n", name);

	return 0;
}
