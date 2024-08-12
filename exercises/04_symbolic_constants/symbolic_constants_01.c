/*
 * NOTE Chapter 1.3 of "The C Programming Language"
 *
 * In programming, hardcoding numbers directly into your code
 * (often referred to as "magic numbers") can make the code less
 * understandable and harder to maintain.
 *
 * Using symbolic constants can help alleviate these issues by
 * providing meaningful names for these numbers.
 *
 * Below is a simple C program that prints a Fahrenheit-to-Celsius
 * conversion table. The program currently uses magic numbers.
 * Your task is to refactor this program to use symbolic constants.
 *
 * Example macro definition:
 * #define PI 3.14159
 *
 * Example usage:
 * double circumference = 2 * PI * radius;
*/

// ❌ I AM NOT DONE

#include <stdio.h>

/* [TODO] Redefine the integer constants in the main loop within the main
 * function as symbolic constants LOWER, UPPER, and STEP with appropriate
 * values, using the preprocessor directive for defining symbolic constants.
 *
 * This exercise is only completed when the preprocessor directives are defined
 * correctly.
 */

int main() {
	// [TODO] replace the magic numbers with the symbolic constants.
	for (int fahr = 0; fahr <= 300; fahr += 20) {
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}

	return 0;
}
