//Author: Khizar Siddiqui 400109902
#include <stdio.h>

void circum(double radius);
void area(double radius);
void volume(double radius);

void menu();
const float  PI = 3.141593;

int main()
{
     void(*f[3])(double)={circum, area, volume};
     size_t choice;
     double radius;
     while(choice >=0 && choice < 3)
     {
          printf( "Choose one of the following: \n\n"
          "0 to calculate the circumference of a circle\n"
          "1 to calculate the area of a circle\n"
          "2 to calculate the volume of a sphere\n"
          "3 to end the function\n\n");
          scanf("%d", &choice);

        if(choice != 3)
        {
            printf("\nEnter the radius of the circle: ");
            scanf("%lf", &radius);
            (*f[choice])(radius);
        }
     }
}

void circum(double radius)
{
    printf("\nCalculating the circumference ...");
    printf("\n\nRadius is %.3f", radius);
    double circ = 2.0 * PI * radius;
    printf("\nCircumference is %.3f\n\n---------------------------------------------------------\n\n", circ);
}

void area(double radius)
{
    printf("\nCalculating the area ...");
    printf("\n\nRadius is %.3f", radius);
    double area = PI * radius * radius;
    printf("\nArea is %.3f\n\n---------------------------------------------------------\n\n", area);
}

void volume(double radius)
{
    printf("\nCalculating the volume ...");
    printf("\n\nRadius is %.3f", radius);
    double volume = (4.0/3.0) * PI * radius * radius * radius;
    printf("\nVolume is %.3f\n\n---------------------------------------------------------\n\n", volume);
}
