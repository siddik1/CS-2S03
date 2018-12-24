//Author: Khizar Siddiqui 400109902

#include <stdio.h>

//initialize main function

int main(void)
{
	//sets first two numbers of fibonacci with type int
	int a = 0;
	int b = 1;
	//sets next term and user input with type int
	int c;
	int x;

	//user prompt to enter n for nth term 
	//stores value as x
	printf("Enter n for nth Fibonacci number: \n");
	scanf("%d", &x);

	//Iteration of fibonacci
	for (int i = 0; i < x; i++)
	{
		a = b;
		b = c;
		c = a + b;
	}

	//prints nth term of fibonacci sequence
	printf("Answer is: %d\n", a);
}