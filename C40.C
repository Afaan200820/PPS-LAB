#include<stdio.h>
int main ()
{
    int n,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("first %d natural numbers are:\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
    }
    return 0;
}
