#include <stdio.h>

int main(void){
    float Largest = 0;
    float Number;
    float Counter = 0;


    while (Counter < 10){
        printf("Enter a non-negative number: ");
        scanf("%f", &Number);
        while(Number < 0){
            printf("You entered a negative number! Enter a positive number: ");
            scanf("%f", &Number);
        }
        if(Number > Largest){
            Largest = Number;
        }
        Counter++;
    }
    printf("The largest number is %.2f\n", Largest);
}