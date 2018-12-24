//Author: Khizar Siddiqui 400109902

#include <stdio.h>

//initialize main function

int hypotenuse() 
{   
    //sets variables to type double

	double side1;      
    double side2;     
    double hypotenuse;

    //prompt to enter value for side 1
    //stores value to side1

    printf("Please enter length of side 1\n");
    scanf("%lf", &side1);
	
    //prompt to enter value for side 2
    //stores value to side2

    printf("Please enter length of side 2\n");
    scanf("%lf", &side2);

    //sums the square of both sides and takes the squareroot of the value

    hypotenuse = sqrt( side1*side1 + side2*side2 );

    //prints result of calculation

    printf("Hypotenuse length of sides %.1lf and %.1lf is: %.1lf", side1, side2, hypotenuse);

}