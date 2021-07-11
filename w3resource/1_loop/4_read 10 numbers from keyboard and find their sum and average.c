#include<stdio.h>
int main()
{
    int i,sum=0,average,numberLimit;
    printf("Enter test number limit\n");
    scanf("%d",&numberLimit);
    int arr[numberLimit];
    for(i=0; i<numberLimit; i++)
    {
        printf("Enter number %d\n",i);
        scanf("%d",&arr[i]);

    }
    for(i=0; i<numberLimit; i++)
    {
        sum = sum+arr[i];
    }
    average = sum/numberLimit;
    printf("Sum is : %d\n",sum);
    printf("Average is %d\n",average);
    return 0;
}


