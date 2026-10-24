#include<stdio.h>
void main()
{
    int marks;
printf("enter marks out of 100:");
scanf("%d",&marks);
    if (marks>100||marks<0)
    {printf("invalid mark");
    }else if
    (marks>=90){
        printf("grade O");
    }else if
        (marks>=80){
         printf("grade A+");
        }else if
            (marks>=70){
                printf("grade A");
            }else if
    (marks>=60){
        printf("grade B");
    }else if
        (marks>=50){
            printf("grade C");
        }
           else if
               (marks<50){
                   printf("Fail");
               }
}
