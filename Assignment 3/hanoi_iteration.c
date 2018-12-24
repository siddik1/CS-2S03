//Author: Khizar Siddiqui 400109902

#include <stdio.h>
#include <math.h>

//initialize main function
int main(void)
{
	//sets values as int
	int disk, moves;
	int init = 1;
	int dest = 3;
	int temp = 2;

	//prompt for number of disks
	printf("Enter number of disks: \n");
	scanf("%d", &disk);

	moves = pow(2, disk) - 1;

	if (disk%2 == 0)
	{
		dest = 2;
		temp = 3;
	}

	for ( int i = 1; i <= moves; i++)
	{
		if(i%3 == 1)
		{
            printf("%d -> %d\n", init, dest);
        }
        else if(i%3 == 2)
        {
        	int x = i/3;
        	if (x%2 != 0)
        	{
				printf("%d -> %d\n", temp, init);
        	}
            else
            {
            	printf("%d -> %d\n", init, temp);
        	}    
        }  
        else if(i%3 == 0)
        {
        	int y = i/3;
        	if (y%2 == 0)
        	{
            	printf("%d -> %d\n", temp, dest);
        	}
        	else
        	{
	            printf("%d -> %d\n", dest, temp);
        	}
        }
	}
}