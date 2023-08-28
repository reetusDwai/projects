#include<stdio.h>

int main()
{
	FILE* fptr;
	fptr = fopen("test.txt", "r");
	
	char myString[101];
	fgets(myString, 2, fptr);

	printf("%s", myString);
	fclose(fptr);
	return 0;
}
