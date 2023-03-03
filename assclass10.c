#include <stdio.h>

int main()
{
    int prize , math ,science ;
     printf("enter your math subject marks: \n");
     scanf("%d" , &math);
     printf("enter your science subject marks : \n");
     scanf("%d", &science);

     if ( math>=40 && science>=40)
     {
        printf("your prize is 45\n", prize);
     }
     else 
      if ( math>=40 || science >=40)
     {
        printf("your prize is 15\n", prize);
     }
      else 
     {
       printf("you didn't recieve any prize money :( ");
     
     }
    return 0;
}
