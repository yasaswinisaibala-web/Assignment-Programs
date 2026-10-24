#include<stdio.h>
void main()
{
    int userID,password;
    printf("enter userID:");
    scanf("%d",&userID);
if (userID!=101){
    printf("user not found");
}
    else{
        printf("enter password:");
        scanf("%d",&password);
        if(password==4321){
            printf("login succesful");
        }else{
            printf("incorrect password");
        }
    }
}
