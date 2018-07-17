// No.5
// purpose: The purpose of this program is to input a date in the form
// mm/dd/yy and display the month in word and the day followed by
//st,nd,rd, or th followed by the year.
//----------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main()
{
	int dd, yyyy;
	int choice;
	char *mm[13];

	mm[0] = "none";
	mm[1] = "Jan";
	mm[2] = "Feb";
	mm[3] = "Mar";
	mm[4] = "Apr";
	mm[5] = "May";
	mm[6] = "June";
	mm[7] = "July";
	mm[8] = "Aug";
	mm[9] = "Sept";
	mm[10] = "Oct";
	mm[11] = "Nov";
	mm[12] = "Dec";


	printf("Enter today's date : ");
	scanf("%d/%d/%d", &choice, &dd, &yyyy);

	printf("\n");

	printf("Today is : %s", mm[choice]);

	if ((dd == 1) || (dd == 21) || (dd == 31))
	{
		printf(" %dst,", dd);
	}
	else if ((dd == 2) || (dd == 22))
	{
		printf(" %dnd,", dd);
	}
	else if ((dd == 3) || (dd == 23))
	{
		printf(" %drd,", dd);
	}
	else if ((dd > 3 && dd < 21) || (dd > 23 && dd < 31))
	{
		printf(" %dth,", dd);
	}

	printf("%d", yyyy);

	printf("\n");



	system("PAUSE");
	return 0;
}
