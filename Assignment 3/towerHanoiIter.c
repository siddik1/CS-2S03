#include <stdio.h>

int main(void){
    int discs, initial, dest, temp;
    printf("Enter the number of disks that you wish to move: ");
    scanf("%d", &discs);
    printf("Enter the number of initial peg: ");
    scanf("%d", &initial);
    printf("Enter the number of destination peg: ");
    scanf("%d", &dest);
    printf("Enter the number of temporary peg: ");
    scanf("%d", &temp);

    int iterations = pow(2,discs)-1;

    // To solve the issue of whenever n = 2, the temporary peg & destination peg are switched 
    if(discs==2){
        int a = dest;
        dest = temp;
        temp = a;
    }
    for (int i = 1; i <= iterations;i++){
        if(i%3 == 1){
            if(i == 1 || i + 1 >= iterations){
                printf("%d -> %d\n", initial, dest);
                continue;
            }
            if (iterations - i <= 2 ){ //&& (iterations - i) > 1
                printf("%d -> %d\n", dest, initial);
                continue;
            }
            printf("%d -> %d\n", initial, dest);
        } else if(i%3 == 2){
            if(i == 2){
                printf("%d -> %d\n", initial, temp);
                continue;
            }
            if(i + 2 >= iterations){
                printf("%d -> %d\n", temp, initial);
                continue;
            }
            printf("%d -> %d\n", initial, temp);
        } else if(i%3 == 0){
            if(i == 3){
                printf("%d -> %d\n", dest, temp);
                continue;
            }
            printf("%d -> %d\n", temp, dest);
        } 
    }
}