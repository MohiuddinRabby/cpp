#include<stdio.h>
int main()
{
    int sum=0,i,numberToTest;
    printf("Test Number : ");
    scanf("%d",&numberToTest);
    for(i=1; i<=numberToTest; i++)
    {
        sum = sum+i;

    }
    printf("sum of number up to %d: %d\n",numberToTest,sum);
    return 0;
}

