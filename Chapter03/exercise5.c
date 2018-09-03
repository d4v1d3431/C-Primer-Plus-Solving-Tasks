//C Primer Plus
//Chapter 3 Exercise 5
//There are approximately 3.156 × 10^7 seconds in a year. Write a program that requests 
//your age in years and then displays the equivalent number of seconds.
#include <stdio.h>
void main(void)
{

	unsigned long long seconds_per_year, age;

	seconds_per_year = 31560000;

	printf("enter your age: ");
	scanf("%lld", &age);

	printf("you are %lld seconds old!", age * seconds_per_year);
	
}
