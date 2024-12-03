#include <stdio.h>
#include<stdlib.h>
void main ()
{
	FILE *fp;
	int total;
	fp = fopen("C:\\file\\data.txt", "w+");
	if (fp == NULL) 
	{
		printf("data.txt does not exist\n");
		exit (0);
	}	
	else
	{	
		printf("\n Enter input to the file\n");
		scanf("%d",&total);
		fprintf(fp,"%d",total);
		fscanf(fp,"%d",&total);
		printf("Value of total:%d\n", total);
		fclose(fp);
	}	
}


