#include<stdio.h>
void main ()
{
double number;
printf("enter a number:");
scanf("%lf",&number);
if(number>0.0)
{
    printf("\nthe number is positive");
}else if(number<0.0)
{
    printf("\nthe number is negative");
}else
printf("the number is zero");
}
