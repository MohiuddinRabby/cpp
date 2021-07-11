#include<stdio.h>
int main()
{
    int testNumber, i,result;
    printf("Enter number : \n");
    scanf("%d",&testNumber);
    for(i=1; i<=10; i++)
    {
        result = testNumber*i;
        printf("%d x %d = %d\n",testNumber,i,result);

    }
    return 0;
}
