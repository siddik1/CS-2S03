//Author: Khizar Siddiqui 400109902

#include <stdio.h>

//initialize main function

int gcd() 
{
	//sets all variables to type int and sets counter to 1

	int number1;
	int number2;
	int counter = 1;
	int gcd;
	int smaller;

	//prompts for number and stores it as number1

	printf("Please enter a positive integer: \n");
	scanf("%d", &number1);

	//prompts for number and stores it as number2

	printf("Please enter a positive integer: \n");
	scanf("%d", &number2);

	//calculates the smaller number between both inputs and stores this as smaller

	if (number1 <= number2)
	{
		smaller = number1;
	}
	else
	{	
		smaller = number2;
	}

	//performs while loop till we reach the smaller number

	while (counter <= smaller)
	{
		//checks if counter can divide both input numbers
		if (number1%counter == 0 && number2%counter == 0)
		{
			//if both are equal new GCD value is current counter value
			gcd = counter;
		}
		//increment to progress loop
		++counter;
	}

	//result of GCD calculation
	printf("The GCD is: %d\n", gcd);	

}