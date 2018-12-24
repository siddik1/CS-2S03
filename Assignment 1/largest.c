//Author: Khizar Siddiqui 400109902

#include <stdio.h>

int main(void){                                         //Initializes the main function
    float counter = 0;                                  //Sets counter to 0 with type float
    float largest = 0;                                  //Sets largest number to 0 with type float
    float number;                                       //Sets number entered with type float
    
    while (counter < 10){                               //begins while loop to perform calculation
        printf("Enter a positive number => ");          //prompt for user input
        scanf("%f", &number);                           //reads user input
        if(number > largest){                           //if user's input is greater than the largest current number  
            largest = number;                           //it sets the user's input as the new largets number
        }
        counter++;                                      //increments the counter to perform same action for next user input
    }
    printf("The largest number is %.2f\n", largest);    //prints the largest number
}