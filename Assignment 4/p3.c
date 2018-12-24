//Author: Khizar Siddiqui 400109902

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//prototype permutation function
int permutation(int a[], int n);

//initializes main function
int main(void) 
{
	//sets size of array as an int called size
	int size;
	//prompts for array size and stored as size
	printf("Enter size of array: ");
	scanf("%d",&size);
	//initialzes array a with size `size`
	int a[size];

	//loop to enter numbers into array
	for (int i = 0; i < size; i++)
	{
		//prompt to enter number and stored as item
	    int item;
		printf("Enter item %d: ", i+1);
		scanf("%d", &item);
		a[i] = item;
	}
	
	//prints out list using for loop
	printf("Original list: \n");

	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}

	//performs permutation on array
	permutation(a, size);

	//prints out new array using for loop
	printf("\nNew list: \n");
	
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
}

permutation(int a[], int size)
{
	//to randomize random number generator
	srand(time(NULL));

	//switches array element with another element
	for (int i = 0; i < size; i++)
	{	
		//takes a random position in array
		int x = rand() % size;
		//switches that position with array element
		int temp = a[i];
		a[i] = a[x];
		a[x] = temp;
	}
}

