#include<stdio.h>
void main ()
{
    float amount,discount=0,delivery=0,finalamount;
    int membership;
printf("enter order amount:");
scanf("%f",&amount);
printf("enter membership type(1- premium,0-regular):"); 
  scanf("%d",&membership);
    if(membership!=0&&membership!=1)
    {printf("invalid membership type\n");
    }else{
        if (amount>=500){
            delivery=0;
            if (membership==1){
                discount=amount*0.10;
            }
        }else{delivery=5;
              discount=0;
             }
        finalamount = amount-discount+delivery;
    printf("final payable amount;%.2f\n",finalamount);
    }
}
