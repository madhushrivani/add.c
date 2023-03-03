#include <stdio.h>

int main()
{
    /* print a multiplication table of a number given by the user in pretty form */

    int n,i;
    printf("enter the number: ");
    scanf("%d", &n);
    for (i=1; i<=10; i++)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
    return 0;
}