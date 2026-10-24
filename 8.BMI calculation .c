#include<stdio.h>
void main()
{
    int weight;
    float height,bmi;
    printf("enter your weight in kg:");
scanf("%d",&weight);
    printf("enter height in meters:");
scanf("%f",&height);
bmi = weight/(height*height);
    printf("bmi=%.2f\n",bmi);
    if (bmi < 18.5) {
        printf("\ncategory:- Underweight");
    } else if (bmi < 25) {
        printf("\nCategory:-  Normal");
    } else if (bmi < 30) {
        printf("\nCategory:- Overweight");
    } else {
        printf("\nCategory: Obese");
    }
}
