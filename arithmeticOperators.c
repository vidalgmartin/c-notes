#include <stdio.h>

int main() {
	/*
		Arithmetic Operators
	*/

	// Addition (+)
	// Subtraction (-)
	// Multiplication (*)
	// Division (/)
	// Modulus (%)
	// Increment by 1 (++)
	// Decrement by 1 (--)
	// Augmented Assignment Operator (+=, -=, *=, /=, %=)

	int x = 2;
	int y = 3;
	int z = 0;


	// Division

	// Expected result: 1.5
	// Actual result: 0
	z = x / y; // Integers cannot store decimals, use floats
	printf("%d\n", z);


	// Modulus

	// Finds the remiander of a division
	z = y % x; // 1
	printf("%d\n", z);


	// Augmented Assignment Operator

	// Combines an operator with an assignment in a single step
	// Shortcut to update its own value
	z = z + 2; // Normal
	z += 2; // Using special operator


	return 0;
}
