#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter a number : %d ", a);
    scanf("%d", &a);
    printf("enter a number : %d ", b);
    scanf("%d", &b);
    c = a + b;

    printf("%d + %d = %d", a, b, c);

    return 0;
}