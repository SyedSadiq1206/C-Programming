#include<stdio.h>
int main()
{
int i = 1, times, table;
scanf("%d%d", &times,&table);
while (i<=times)
{
printf("%d%d=%d\n",table,i,table*i);
i=i+1;  }
return 0 ;
}