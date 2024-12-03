#include<stdio.h>
void main()
{
	FILE *fptr;
	char string[100];
	fptr = fopen("c:\\file\\EMP.REC", "r");
	clrscr();
	if(fptr != NULL)
	{
		while(fgets(string, 100, fptr))
		{
			printf("%s", string);
		}
	}
	else 
	{
		printf("Not able to open the file.");
	}
	fclose(fptr);
}