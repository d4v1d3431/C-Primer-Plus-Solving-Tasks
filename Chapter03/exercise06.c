//C Primer Plus 
//Chapter 3 Exercise 6:                          "3.0e-23"
//The mass of a single molecule of water is about 3.0×10^-23 grams. A quart of
//water is about 950 grams. Write a program that requests an amount of water,
//in quarts, and displays the number of water molecules in that amount. 
#include <stdio.h>

void main (void)

{

	double H2O_mass = 3.0e-23;
	double grams_per_quart = 950;
	int quarts;
	
	printf("enter number of quarts: ");
	scanf("%d", &quarts);
	printf("there are %e water molecules in %d quarts of water", grams_per_quart * quarts / H2O_mass, quarts);

}
