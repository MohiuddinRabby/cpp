#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter n terms: ");
    scanf("%d",&n);
    for(i=1; i<=n*2; i++)
    {
        if(i%2!=0)
        {
            sum = sum + i;
            printf("%d\n",sum);
        }
    }
    return 0;
}

