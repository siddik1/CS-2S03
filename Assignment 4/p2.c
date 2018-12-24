//Author: Khizar Siddiqui 400109902

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//initializes main function
int main(void) 
{
	//to fully randomise random generator
	srand(time(NULL));
	//sets initial sum to 0 and dimension to int as n
	int n, sum = 0;

	//prompt for matrix dimension and stored as n
	printf("Enter dimensions of matrix: ");
	scanf("%d", &n);
	
	//initializes array with specified dimensions
	int a[n][n];

	//loop to add random numbers into matrix
	for (int i = 0; i < n; i++){
		for (int k = 0; k < n; k++){
			//number from 1 to 9
			a[i][k] = rand() % 10;
		}
	}

	//prints out matrix with random numbers inout
	printf("Your randomly generated matrix is: \n");
	for (int i = 0; i < n; i++){
		for (int k = 0; k < n; k++){
			printf("%d ", a[i][k]);
		}
		printf("\n");
	}

	//loop to sum all cases of numbers above and to the right of main diagonal
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			sum += a[i][j];
		}
	}

	//prints out sum
	printf("Sum is: %d\n", sum);
}