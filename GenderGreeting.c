//---------------------------------
// Mohammed Hassnain
// cpsc 223c
// Aug 27, 2015
// No.2
// purpose: The purpose of this program is to input your full name and
// gender. The program will then print out the appropriate way to address your
// gender. It will then ask for your friends name. A greeting will be printed out
// stating to your printed that you considered them as a friend.
//----------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char fullname[50];
	char friendsname[50];
	char sentence[80] = "";
	char gender;

	printf("Enter your full name: ");
	gets(fullname);

	printf("\n");

	printf("%s , Please enter your gender(m/f)? : ", fullname);
	scanf("%c%*c", &gender);
	puts("\n");

	if (gender == 'm')
	{
		printf("Mr. %s , please enter your friends name:", fullname);
		gets(friendsname);
		puts("\n");
	}

	else if (gender == 'f')
	{
		printf("Mrs. %s , please enter your friends name:", fullname);
		gets(friendsname);
		puts("\n");
	}

	strcat(sentence, "Hello Mr./Mrs. ");
	strcat(sentence, friendsname);
	strcat(sentence, ", ");
	strcat(sentence, fullname);
	strcat(sentence, " considered you as a friend. ");

	puts(sentence);

	return 0;
	system("PAUSE");
}
