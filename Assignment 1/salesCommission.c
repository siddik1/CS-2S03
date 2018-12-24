#include <stdio.h>

int main(void){
    float grossSales = 1;
    float income;
    float salary;

    while (grossSales != -1){
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &grossSales);
        income = grossSales * 0.09;
        salary = 200 + income;
        printf("Salary is: $%.2f\n", salary);
    }
}