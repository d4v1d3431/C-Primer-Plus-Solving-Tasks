//C Primer Plus
//Chapter3 Exercise 7:
//There are 2.54 centimeters to the inch. Write a program that asks you to enter
//your height in inches and then displays your height in centimeters. Or, if you
//prefer, ask for the height in centimeters and convert that to inches. */

#include <stdio.h>

void main (void)
{	

	float cm_per_inch = 2.54;
	float inch;

	printf("enter your height in inches: ");
	scanf("%f", &inch);
	printf("you are %f centimeters tall\n", inch * cm_per_inch);

}
