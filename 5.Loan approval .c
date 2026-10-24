#include<stdio.h>
void main()
{
int age,creditscore;
float income;
printf("Enter Age:");
scanf("%d",&age);
printf("Enter income:");
scanf("%f",&income);
printf("Enter creditscore:");
scanf("%d",&creditscore);
if(age<21||age>60) 
{ 
printf("Loan rejected as age not supported");
}else if(income<25000){
printf("Income insufficient"); 
}else if(creditscore<700){
printf("creditscore insufficient");
}else{
printf("Loan approved");
}
}
