//Author: Khizar Siddiqui 400109902

#include <stdio.h>

//initialize main function

int multiple() 
{
    //sets variables to type Int

    int integer1;
    int integer2;

    //prompt to enter value for integer 1
    //stores value as integer1

    printf("Please enter integer 1:\n");
    scanf("%d", &integer1);

    //prompt to enter value for integer 2
    //stores value as integer2

    printf("Please enter integer 2:\n");
    scanf("%d", &integer2);

    //divides integer 2 by integer 1 and checks if remainder is zero 

    if (integer2%integer1 == 0)
    {
        //if it is zero then integer 2 is a multiple of integer 1 and prints answer as 1
        printf("Answer is 1\n");
    }
    else 
    {
        //if it isn't zero then integer 2 is not a multiple of integer 1 and prints answer as 0        
        printf("Answer is 0\n");
    }
}