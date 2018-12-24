//Author: Khizar Siddiqui 400109902

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

//enumeration constant to represent game status
enum Status { CONTINUE, WON, LOST };

//function prototype
int rollDice(void);

int main()
{
	//to randomize random number
	srand(time(NULL));
	//point needed to win
	int myPoint;
	//contains Win, Lose or Continue 
	enum Status gameStatus;
	//initial bank balance
	int bankBalance = 1000;
	//initializer for wager
	int wager;

	//loop to continue game for several rounds
	while (bankBalance > 0)
	{
		//initialzers for random chatter generator
		char *win[] = {
		"You're on fire!!!",
	    "You're up big. Now's the time to cash in your chips!",
	    "That's a whole lotta wagering, how're you gonna pay back OSAP?",
	    "GO ALL IN!!!",
		};
		char *lose[] = {
		"Oh, you're going for broke, huh?",
		"Aw cmon, take a chance!",
		"I'll wait for a bit while you grab some more money from the Mafia ...",
	    "That's all? Fam, I know you got more cash than that ...",
		};
		//randomizer to choose chatter statement
		int a = rand()%4;
		
		//prompt for wager and stored as wager
		printf("\nPlease enter a wager:\n");
		scanf("%d", &wager);

	//checks to see if wager isn't more than bankBalance 	
	while (	wager > bankBalance)
	{
		//If so, prompts for reentry
		printf("Please reenter wager:\n");
		scanf("%d", &wager);
	}

	//gets the first die roll sum
	int sum = rollDice();

	//determine status based on roll
	switch(sum) {

		//win on first roll
		case 7: 
		case 11:
			gameStatus = WON;
	    	break;

	    //lose on first roll
		case 2: 
		case 3: 
		case 12: 
	    	gameStatus = LOST;
	    	break;

	    //point saved for future gameplay
		default:
			gameStatus = CONTINUE; 
			myPoint = sum; 
			printf("Point is %d\n", myPoint);
			break; 
	}

	//instructions if game not complete
	while (CONTINUE == gameStatus) {

		//second die roll
		sum = rollDice();
		
		//if new sum is same as old sum then player wins
		if (sum == myPoint) {
			gameStatus = WON;
		}
		else {
			//if they roll a 7 player loses
			if (7 == sum) { 
			gameStatus = LOST;
			}
		}
	}

	if (WON == gameStatus) {
		//update bankBalance and prints it out
		bankBalance = bankBalance + wager;
		printf("Your new balance is: $%d\n", bankBalance);
		//outputs some encouraging chatter
		printf(win[a]);
	}
	else { 
		//updates bankBalance and prints it out
		bankBalance = bankBalance - wager;
		printf("Your new balance is: $%d\n", bankBalance);
		//if no more bankBalance player loses otherwise keeps playing
		if (bankBalance <= 0)
		{
			printf("Sorry. You busted!\n");
		}
		else
		{
			//outputs encouraging comments
			printf(lose[a]);
		}
	}
	}

}

//die roll function
int rollDice(void)
{
	//picks random die values 
	int die1 = 1 + (rand() % 6); 
	int die2 = 1 + (rand() % 6);
	//displays result of die values 
	printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
	//returns sum of die value
	return die1 + die2;
}