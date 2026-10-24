#include<stdio.h>
void main ()
{
    float length, width, area, perimeter;
    printf("enter the length of the rectangle:");
    scanf("%f",&length);
    printf("enter the breadth of the rectangle:");
    scanf("%f",&width);
    area = length*width;
    perimeter = 2*(length+width);
    printf("area of rectangle:%.2f\n",area);
    printf("perimeter of rectangle:%.2f\n",perimeter);
}
