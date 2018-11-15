/*
 *	Write a C program that simulates a game of craps, which is played with two dice. On the first roll, the player wins if the sum of the dice is 7 or 11. The player losers if the sum is 2, 3, or 12. Any other roll is called the "point" and the game continues. On each subsequent roll the player wins if he or she rolls the point again. The player loses by rolling a 7. Any other roll is ignored and the game continues. At the end of the game the program will display the rolls and if the user wins or loses and the game terminates.
 *
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 /*
  * Function Prototype(s)
  */
 
 int roll_dice(int*);

 /*
  * roll_dice method
  *
  *  Takes the pointer to an integer, simulate the rolling of two die, and return the sum of the die
  *
  */
 
 
 int roll_dice(int* dice){
	 int die1;
	 int die2;
	 int sum;
	 
	 die1 = ( (rand() % 6) + 1);
	 die2 = ( (rand() % 6) + 1);
	 sum = (die1 + die2);
	 
	 return sum;
 }
 
 /*
  * Main Function
  *
  */
 
 
 int main(void)
 {
	 srand(time(NULL));
	
	 int sum;
	 int point;
	
	 sum = 0;
	 
	 sum = roll_dice(&sum);
	 
	 printf("\nYou Rolled:\t %d\n", sum);
	 if (sum == 7 || sum == 11)
	 {
		 printf("\nYOU WIN!\n\n");
	 }
	 
	 else if (sum == 2 || sum == 3 || sum == 12)
	 {
		 printf("\nYOU LOSE!\n\n");
	 }
	 
	 else
	 {
		point = sum;
		printf("Your point is:\t %d\n", point);
	
		sum = roll_dice(&sum);
		printf("You rolled:\t %d\n", sum);
		
		while (point != sum)
		{
			sum = roll_dice(&sum);
			printf("You rolled:\t %d\n", sum);
			if ( sum == 7)
			{
				printf("\nYOU LOSE!\n\n");
				break;
			}
			
			
		}
		
		if (point == sum)
			printf("\nYOU WIN!\n\n");
	 }
	
	return 0;
	 
 }