#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("C:\\file\\data.txt","r");
	clrscr();
	if(fp==NULL)
	{
		printf("No File exists in Directory");
		exit(0);
	}
	else
		printf("File Opened");
	fclose(fp);
}
