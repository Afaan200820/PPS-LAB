#include<stdio.h>
void main()
{
   int cc[4],sum=0;
   printf("enter 4 values");
   for(int i=0;i<4;i++)
   scanf("%d",&cc[i]);

   for(int i=0;i<4;i++)
   sum=sum+cc[i];

   printf("sum=%d",sum);

}
