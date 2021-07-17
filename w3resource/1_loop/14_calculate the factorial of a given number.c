#include <stdio.h>
int main()
{
    // new
    int i, sum = 1;
    for (i = 1; i <= 5; i++)
    {
        sum = sum * i;
        printf("%d\n", sum);
    }
    return 0;
}
