//---------------------------------
// Mohammed Hassnain
// cpsc 223c
// Aug 27, 2015
// No.3
// purpose: The purpose of this program is to calculate the total cost
// of items ordered from the menu by adding the price of each item to
// the total cost.
//----------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define COKE 2.10
#define HAMBURGER 1.85


int main()
{

	int CokeAmount;
	int HamburgerAmount;
	float total;

	printf("--------------Menu---------------\n");
	printf("Coke %28.2f \n", COKE);
	printf("Hamburger %23.2f", HAMBURGER);
	printf("\n\n");

	printf("How many cokes? :");
	scanf("%d", &CokeAmount);
	printf("\n");

	printf("How many hamburgers? :");
	scanf("%d", &HamburgerAmount);
	printf("\n");

	total = ((COKE * (float)CokeAmount) + (HAMBURGER * (float)HamburgerAmount));

	printf("Your total bill = %.2f", total);
	printf("\n");

	return 0;
	system("PAUSE");
}
