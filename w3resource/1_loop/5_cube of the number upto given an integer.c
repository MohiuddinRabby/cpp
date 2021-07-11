#include <stdio.h>

int main()
{
    int i,numberLimit,result;
    scanf("%d",&numberLimit);
    for(i=1; i<=numberLimit; i++)
    {

        result = pow(i,3);
        printf(" result %d\n",result);
    }
    return 0;
}

