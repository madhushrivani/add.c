#include<stdio.h>

int main()
{
    int i;
    int n;
    double  kms= 0.621;
    int inch = 12;
    double cm= 0.39;
    double pound= 2.2046;
    double meter= 0.0254;


    printf("enter 1 for converting kms to meter\nEnter 2 to convert inches to foot\nEnter 3 to convert cms to inches\nEnter 4 to convert pond to kgs\nEnter 5 to convert inches into meter\n " );
    scanf("%d", &i);

    if(i==1 ){
       printf("you wants to convert kms to miles\n enter the digit(km): ", n);
       scanf("%d", &n);
       printf("%d*%lf=%lf",n, kms, n*kms );
       printf(" mi");

    }else if(i==2){
       printf("you want to convert convert inches into foot\n enter the digit(in): ", n);
        scanf("%d", &n);
        printf("%d/%d=%d",n,inch, n/inch);
        printf(" ft");
    }else if(i==3){
        printf("you want to convert centimeter into inches\nEnter the digit(cm):", n);
        scanf("%d", &n);
        printf("%d*%lf=%lf",n,cm,n*cm);
        printf(" in");
    }else if(i==4){
        printf("you want to convert pound into kgs\nEnter the digit(pound):", n);
        scanf("%d", &n);
        printf("%d/%lf=%lf",n,pound,n/pound);
        printf(" kg");
    }else if (i==5){
        printf("you want to convert inch into meter\nEnter your digit(inch):",n);
        scanf("%d",&n);
        printf("%d*%lf=%lf",n,meter,n*meter);
        printf(" meter");
        }
    return 0;
}
