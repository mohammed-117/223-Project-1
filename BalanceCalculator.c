//---------------------------------
// Mohammed Hassnain
// cpsc 223c
// Aug 27, 2015
// No.1
// purpose: The purpose of this program is to input your money deposit,
//interest rate, and duration in years in order to calculate your balance
//after a period of time.
//----------------------------------

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	float balance;
	float dollars;
	float interestRate;
	float year;

	printf("Enter the money you want to deposit now(P):");
	scanf("%f", &dollars);
	printf("\n");

	printf("Enter the interest rate:");
	scanf("%f", &interestRate);
	printf("\n");

	printf("Enter the duration in year(t):");
	scanf("%f", &year);
	printf("\n");

	balance = dollars * (exp(interestRate * year));

	printf("Your balance after %d years ", (int)year);
	printf("is %.2f", balance);
	printf("\n");

	return 0;

	system("PAUSE");
}
