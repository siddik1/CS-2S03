//Author: Khizar Siddiqui 400109902

#include <stdio.h>

//prototype hanoi function
int hanoi(int, char, char, char);

//initialze main function
int main(void)
{
	//sets value of disks as int 
	int n;
	
	//prompt for number of disks and stored as n
	printf("Enter number of disks: \n");
	scanf("%d", &n);
	printf("Follow these steps: \n");

	//calling function hanoi
	hanoi(n, '1', '3', '2');
}

//hanoi function
hanoi (int n, char init, char dest, char temp)
{
	//base case i.e only one disk
	if (n == 1)
	{
		//print to move to destination
		printf("%c -> %c\n", init, dest);
		return 0;
	}
	//move all disks before last from starting to temporary using destination
	hanoi(n-1, init, temp, dest);
	//print to move last disk to destination
	printf("%c -> %c\n", init, dest);
	//move all disks before last from temporary to destination using starting
	hanoi(n-1, temp, dest, init);
}