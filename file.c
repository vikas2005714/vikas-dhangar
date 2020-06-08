#include<stdio.h>

int main()
{
int i,fact=1,n;
  printf("print the factorial of odd number and otherwise print number itself");
  scanf("%d",n);
  if(n==0)
   exit 1;
else
{
  if(n%2==0)
   printf("%d",n);
 else
 {
   for(i=1;i<n;i++)
      fact=fact*i;
      printf("factorial of given %d = %d",i,fact);
 }
}  
 return 0;
 }
