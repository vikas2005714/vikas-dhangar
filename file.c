#include<stdio.h>

int main()
{
int i,fact=1,n;
  scanf("%d",n);
for(i=1;i<n;i++)
  fact=fact*i;
  printf("factorial of given %d = %d",i,fact);
 return 0;
 }
