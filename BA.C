#include<stdio.h>
void main()
{
  int a=10,b=20;
  swapx(&a,&b);
  printf("a=%d b=%d",a,b);
  a=35;
  b=67;
  swapx(&a,&b);
  printf("a=%d b=%d",a,b);
}
