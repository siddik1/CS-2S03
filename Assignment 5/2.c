//Author: Khizar Siddiqui 400109902
#include <stdio.h>

void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);

int main()
{
     void (*f[4])(double, double) = {add, subtract, multiply, divide};

     size_t choice;
     double no1, no2;

     while(choice >=0 && choice < 4)
     {
          printf( "Choose one of the following: \n\n"
          "0 to do addition\n"
          "1 to do subtraction\n"
          "2 to do mutiplication\n"
          "3 to do division\n"
          "4 to end the program\n\n");
          scanf("%d", &choice);

        if(choice != 4)
        {
            printf("\nEnter the first number for calculation: ");
            scanf("%lf", &no1);
            printf("Enter the second number for calculation: ");
            scanf("%lf", &no2);
            (*f[choice])(no1, no2);
        }
     }
}

void add(double a, double b)
{
    printf("\nPerforming addition on both numbers ...");
    printf("\n\nNumbers are %.3f and %.3f", a, b);
    double sum = a + b;
    printf("\nSum is %.3f\n\n---------------------------------------------------------\n\n", sum);
}

void subtract(double a, double b)
{
    printf("\nPerforming subtraction on both numbers ...");
    printf("\n\nNumbers are %.3f and %.3f", a, b);
    double sub = a - b;
    printf("\nDifference is %.3f\n\n---------------------------------------------------------\n\n", sub);
}

void multiply(double a, double b)
{
    printf("\nPerforming multiplication on both numbers ...");
    printf("\n\nNumbers are %.3f and %.3f", a, b);
    double mult = a * b;
    printf("\nProduct is %.3f\n\n---------------------------------------------------------\n\n", mult);
}

void divide(double a, double b)
{
    printf("\nPerforming division on both numbers ...");
    printf("\n\nNumbers are %.3f and %.3f", a, b);
    double div = a / b;
    printf("\nQuotient is %.3f\n\n---------------------------------------------------------\n\n", div);
}
