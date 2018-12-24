//Author: Khizar Siddiqui 400109902

#include <stdio.h>

int main(void){                                           //Initializes the main function
    float sales = 0;                                      //Sets sales to 0 with type float
    float salary;                                         //Sets salary with type float
    float commission;                                     //Sets commission with type float
 
    while (sales != -1){                                  //begins while loop to perform calculation
        printf("Enter sales in dollars (-1 to end): ");   //prompt for input
        scanf("%f", &sales);                              //reads input
        commission = sales * 0.09;                        //calculates commission from each sale
        salary = 200 + commission;                        //calculates salary from commission and base amount 200
        if (sales == -1) {                                //if user input is -1, criteria from line 10 breaks while loop
        	printf("Salary is: $0");                      //and prints zero salary
        }
        else {                                        
        	printf("Salary is: $%.2f\n", salary);         //prints the calculated salary for the employee
        }
    }
}