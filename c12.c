#include<stdio.h>
int main()
{
  int a,b,c;
  float average;
  printf("enter three numbers:");
  scanf("%d %d %d",&a,&b,&c);
  average=(a+b+c)/3.0;
  printf("average=%.2f",average);
  return 0;
  }
