#include <stdio.h>

int main() {
	/*
		Format Specifier
	*/

	// Begins with a % symbol
	// Followed by a character that specifies the data type

	// Testing variables
	int age = 25;
	float price = 19.99;
	double pi = 3.1415926535;
	char currency = '$';
	char name[] = "Cow";

	// Decimal
	printf("%d\n", age);

	// Float
	printf("%f\n", price);

	// Long Float
	printf("%lf\n", pi); // You can use regular float, however its better practice to use lf for doubles

	// Char
	printf("%c\n", currency);

	// Array of Characters (String)
	printf("%s\n", name);

	// Width
	// Creates space to the right or left depending on value sign
	int num = 100;
	printf("%04d\n", num); // Can also put another number value before to fill the space with such value

	// Number sign
	// Will display its respective sign value
	int numSign1 = 1; // "+1"
	int numSign2 = -1; // "-1"
	printf("%+d\n", numSign1);
	printf("%+d\n", numSign2);

	// Precision
	// Default behavior is to display 6 variables
	// Output is rounded if the precision variable is lower than the number of decimals
	float preciseNum = 9.99; // By default this would be 9.990000
	printf("%.2f\n", preciseNum); // Will only display 2 now "9.99"

	// Width, Sign and Precision combined
	printf("%+7.2f\n", preciseNum);


	return 0;
}
