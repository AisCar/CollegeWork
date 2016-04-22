// Algorithms1.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

FILE *fptr;
char names[100][12] = { 0 };
char searchName[12] = { 0 };
int i, count;

int main()
{

//Scan in names
	fptr = fopen("C:\\Users\\...\\surnames.txt","r");
	for (i = 0;i < 100;i++)
	{
		fscanf(fptr, "%s", names[i]);
	}
	fclose(fptr);

//Search for names
	printf("Type a surname to search for\n");
	scanf("%11s", searchName);
	for (i = 0; i < 100; i++)
	{
			if (strcmp(searchName, names[i]) == 0)
			{
				count = count + 1;
			}
	}


//Print results
	if (count != 0)
	{
		printf("Name occurs %d times\n", count);
	}
	else
	{
		printf("Error: No occurances of name\n");
	}

    return 0;
}