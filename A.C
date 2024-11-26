#include<stdio.h>
void main()
{
	int a[5]={8,3,9,2,7},i,key=3,flag=0,location;
	int key=
	3,flag=0,n=3;
	int location;
	printf("\n print given array \n");
	for(i=0;i<n;i++)
	printf("\t a[%d]=%d",i,a[i]);
	printf("\n the key value=%d",key);
	for(i=0;i<n;i++);
	{
	if(key==a[i])
	{
	 flag=1;
	 location=i;
	 break;
	}
	}
	if(flag==1)
	  printf("\n successful search element found at a[%d]\n", location);
	else
	  printf("\n unsuccessful search element found at a[%d]\n");
}