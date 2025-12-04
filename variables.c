#include <stdio.h>

// You need this header file to use booleans
#include <stdbool.h>

int main() {

        /*
                Variables
        */

        // int
        // Whole numbers
        // 4 bytes (in modern systems)
        int age = 27;
        printf("Helloge world, I'm %d years old\n", age);

        // float
        // Single precision decimal number
        // 4 bytes
        float num = 2.24;
        printf("This is a float number: %.1f\n", num);

        // double
        // Double precision decimal number
        // 8 bytes
        float floatButLong = 2.2424242424;
        printf("This is a double number: %.10lf\n", floatButLong);

        // char
        // A single character
        // 1 byte
        char letter = 'A'; // You have to use single quotes
        printf("This is a character: %c\n", letter);

        // char[]
        // Array of characters
        // Byte size varies
        char string[] = "Array of characters"; // In C there is no string type variable
        printf("This is a string: %s\n", string);

        // bool
        // true or false
        // 1 byte
        // requires header <stdbool.h>
        bool something = true; // equals to 1
        bool nothing = false; // equals to 0

	return 0;
}
