/*
	My First C Program
*/

// This gives your program access to the standard input/output library
// So it can use functions as "printf"
// Without it the compiler doesn't understand such functions
#include <stdio.h>

int main() {

	// Print syntax
	printf("Helloge world");

	// To indicate that the program finished successfully
	// Anything other than zero to indicate something went wrong
	// In modern C it's not required, however it's still convention
	return 0;
}
