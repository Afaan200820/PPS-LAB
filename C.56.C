#include<stdio.h>
int main(void)
{
    int a[5],i,sum = 0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum +=a[i];
    }
    printf("%d\n",sum);
    return 0;
}
