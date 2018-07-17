//---------------------------------
// Mohammed Hassnain
// cpsc 223c
// Aug 27, 2015
// No.4
// purpose: The purpose of this program is to calculate the perimeter and
// and area of a triangle after taking the measurements of all three sides.
//----------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>



int main()
{
	float Area;
	float Perimeter;
	float TOne, TTwo, TThree;

	printf("Enter the measure of all three sides: ");
	scanf("%f %f %f", &TOne, &TTwo, &TThree);


	printf("\n\n");


	printf("               /\\             \n");
	printf("              /  \\            \n");
	printf("   a=%.2f    /    \\  b=%.2f    \n", TOne, TTwo);
	printf("            /      \\          \n");
	printf("           /________\\         \n");
	printf("             c=%.2f            \n", TThree);
	printf("\n\n");


	Perimeter = ((TOne + TTwo + TThree) / 2);
	Area = (sqrt(Perimeter * ((Perimeter - TOne)*(Perimeter - TTwo)*(Perimeter - TThree))));

	printf("Area = %.2f \n", Area);
	printf("Perimeter = %.2f", Perimeter);
	printf("\n");


	return 0;
	system("PAUSE");
}
