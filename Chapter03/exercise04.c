//C Primer Plus
//Chapter 03 Exercise 04
//Write a program that reads in a floating-point number and prints it first in decimal-point notation,
//then in exponential notation, and then, if your system supports it, p notation. Have the output use 
//the following format (the actual number of digits displayed for the exponent depends on the system):
//Enter a floating-point value: 64.25
//fixed-point notation: 64.250000
//exponential notation: 6.425000e+01
//p notation: 0x1.01p+6 */
#include <stdio.h>
void main (void)
{

	float a;

	printf("enter a floating-point number: ");
	scanf("%f", &a);

	printf("fixed-point notation: %f\n", a);
	printf("exponential notation: %e\n", a);
	printf("p notation: %.2a\n", a);
	
}
