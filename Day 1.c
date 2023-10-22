/*program for addtion of two numbers without using third variable*/
#include<stdio.h>
void addition ()
{
  int a,b;
  printf("Enter the first number:-");
    scanf("%d",&a);
    printf("Enter the second number:-");
    scanf("%d",&b);
  printf("addition is:-%d",a+b);
}
int main()
{
  addition();
  return 0;
}
