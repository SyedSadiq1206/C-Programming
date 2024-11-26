#include<stdio.h>
#include<math.h>
void main()
{
  int angle[5]={0,30,45,60,90};
  int i;
  for(i=0;i<5;i++)
  printf("%2f \t" ,sin (angle[i]));
}
