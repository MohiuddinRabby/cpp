#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1; i<=5; i++)
    {
        for(j=i-2; j<=i; j++)
        {
            for(k=j; k>=j; k--)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
