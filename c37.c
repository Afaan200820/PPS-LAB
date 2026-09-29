#include<stdio.h>
int main()
{
    int choice;
    int a=10,b=5;
    printf("1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVISION\n");
    printf("enter your choice:");
    scanf("%d",choice);
    switch (choice)
    {
    case 1:
        printf("sum=%d",a+b);
        break;
    case 2:
        printf("diff=%d",a-b);
        break;
    case 3:
        printf("multiply=%d",a*b);
        break;
    case 4:
        printf("div=%d",a/b);
        break;
    default:
        printf("invalid choice");


    }
    return 0;
}
