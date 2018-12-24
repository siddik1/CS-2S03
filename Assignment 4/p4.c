//Author: Khizar Siddiqui 400109902

#include <stdio.h>

//initialize size of array
int size;

//prototype maxinarray function
int maxinarray(int arr[]);

//initialzies man function
int main(void)
{
	//prompt for array size and stored as `size`
	printf("Enter size of array: ");
	scanf("%d", &size);

	//initializes array to size `size` and sets max to 0 for now
	int arr[size];
	int max = 0;

	//for loop to add number to array
	for (int i = 0; i < size; i++)
	{
		//prompt for number, saved as number and stored into array
		int number;
		printf("Enter number %d: ", i+1);
		scanf("%d",&number);
		arr[i] = number;
	}

	//prints out original array
	printf("Array is: \n");

	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}	

	//prints maximum number from array
	printf("\nMax is: %d", maxinarray(arr));
}

int maxinarray(int arr[])
{
	//sets i as static and i, max as int to zero
	static int i = 0, max = 0;
	//checks if still in array
	if (i < size)
	{
		//compares element and maximum 
		if (arr[i] > max)
		{
			//if larger than max, sets new max
			max = arr[i];
		}
		//increment to mive forward
		i++;
		//calls function again
		maxinarray(arr);
	}
	//return max when done through whole list
	return max;
}