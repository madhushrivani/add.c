 #include<stdio.h>
 int main()
 {
    int age, marks;
    printf("enter your age :\n");
    scanf("%d", &age);
    printf("enter your marks: \n");
    scanf("%d", &marks);

    switch (age)
    {
    case 6:
        printf("your age is 6\n");
        switch (marks)
        {
        case 45:
            printf("your marks is 45");
            break;
        
        default:
        printf("your marks is not 45");
        }
            break;

    //case 7:
    //    printf("your age is 7\n");
      //  break;
    
    //default:
      //   printf("no match"); 
     //break;
    
    default:
    printf("not matched");
        break;
 }
    return 0;
 
 }