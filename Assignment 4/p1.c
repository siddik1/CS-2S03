//Author: Khizar Siddiqui 400109902

#include <stdio.h>
//pre-defines SIZE for arrays
#define SIZE 10

//initialize main function
int main(void)
{
	//initializes array 'a' array to size 'SIZE' 
	int a[SIZE];

	//prompt for entry of numbers into array
	printf("Please enter 10 numbers for an array: \n");

	//for loop to take user input into existing array
	for (int i = 0; i < 10; ++i)
	{
		//prompts for entry and stored into array
		int value;
		printf("Enter number %d: \n", i+1);
		scanf("%d", &value);
		a[i] = value;
	}

	//prints out array using for loop
	printf("Original list:\n");

	for (size_t i = 0; i < SIZE; ++i)
	{
		printf("%d ", a[i]);
	}

	printf("\nSorted list:\n");

	//for loop to sort array into ascending order
	for (unsigned int pass = 1; pass < SIZE; ++pass)
	{
		for (size_t i = 0; i < SIZE - 1; ++i)
		{
			if (a[i] > a[i + 1])
			{
				int hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
	}

	//prints out sorted array
	for (size_t i = 0; i < SIZE; ++i)
	{
		printf("%d ", a[i]);
	}

	printf("\nUnique elements:\n");
	
	//checks to see if 1st element is same as 2nd element	
	if (a[0] != a[1])
	{
		//prints if unique
		printf("%d ", a[0]);
	}

	//for loop to check if there are 2 or more elements together (i.e not unique)
	for (size_t i = 1; i < SIZE - 1; ++i)
	{
		if (a[i] == a[i + 1] || a[i] == a[i - 1])
		{
			continue;
		}
		else
		{
			//prints if unique
			printf("%d ", a[i]);
		}
	}

	//checks if last element is same as 2nd last 
	if (a[SIZE-1] != a[SIZE-2])
	{
		//prints if unique
		printf("%d ", a[SIZE-1]);
	}
}