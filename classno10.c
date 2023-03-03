#include <stdio.h>
int main()
{
    int age;
    printf("ENTER YOUR AGE\n");
    scanf("%d", &age);

    printf("your age is %d ,\n", age);

    if (age>=18)
    {
        printf("you are eligible to vote");
    }
    else if(age>10)
    {
        printf("you are not eligible to vote but you can vote for kides");

    }else{   
        printf("you are not eligible to vote");
    }
    
    
    return 0;
}
