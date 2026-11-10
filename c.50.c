#include<stdio.h>
int main ()
{
    int values[7];
    printf("enter 7 integers:");
    for(int i=1;i<7;i++)
    {
        scanf("%d",&values[i]);
}
printf("displaying integers");
for(int i=1;i<7;i++)
{
    printf("%d\t",values[i]);
}
return 0;
}
