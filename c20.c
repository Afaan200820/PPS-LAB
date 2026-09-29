#include<stdio.h>
int main ()
{
    int password;
    printf("enter password");
    scanf("%d",&password);
    if (password==1234)
    {
        printf("login successfull");
    }
    else
    {
        printf("incorrect password");
    }
    return 0;
}
