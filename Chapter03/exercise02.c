//C Primer Plus
//Chapter 3 Exercise 2:
//Write a program that asks you to enter an ASCII code value, such as 66, and
//then prints the character having that ASCII code. 

#include <stdio.h>
void main (void)
{

	int ASCII_CODE;

	printf("enter ASCII code: ");
	scanf("%d", &ASCII_CODE);

	printf("ASCII code: %d\ncorresponding character: %c", ASCII_CODE, ASCII_CODE);
	
}
