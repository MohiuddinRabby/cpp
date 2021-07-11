#include<stdio.h>
int main()
{
    int testNumber,i,j,result;
    printf("Enter test number:");
    scanf("%d",&testNumber);
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=testNumber; j++)
        {
            printf("%dx%d=%d\n",i,j,i*j);
        }
    }
    return 0;
}

