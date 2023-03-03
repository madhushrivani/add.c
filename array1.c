#include<stdio.h>

int main()
{

    int marks[4];
  //  printf("%d", marks[]);
    for(int i=0; i<4; i++){
        printf("enter the element of %d th element\n", i);
        scanf("%d", &marks[i]);
    }
    for(int i=0;i<4;i++){
        printf("the value of %d element of array is %d\n", i, marks[i]);
    }

    /* marks[0]=33;
    marks[1]=44;
    marks[2]=45;
    marks[3]=45;
    printf("marks of 1st student is %d\n", marks[0]);
    printf("marks of 2st student is %d\n", marks[1]);
    printf("marks of 3st student is %d\n", marks[2]);
    printf("marks of 4st student is %d\n", marks[3]);
  */
    //scanf("%d", &marks[0]);
    return 0;
}
