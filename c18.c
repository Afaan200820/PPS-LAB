#include <stdio.h>
int main ()
{
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    if (marks>=90)
    {
        printf("grade A");
    }
    else if(marks>=75)
            {
                printf("grade B");
            }
    else if(marks>=60)
    {
        printf("grade C");
    }
    else if(marks>=40)
            {
                    printf("grade D");
            }
            else
            {
                printf("fail");
            }
            return 0;
}
