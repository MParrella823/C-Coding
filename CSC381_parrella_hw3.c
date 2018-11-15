#include <stdio.h>
#include <stdlib.h> 

/*
 * Matt Parrella
 * CSC381 - Fall 2018
 * Homework #3
 * September 21, 2018
 *
 */

/*
 *
 * HELPER METHOD:
 *
 * findNumDays will require an integer to be passed into the function. 
 * This number will represent a month in the calendar year. The function
 * will return the maximum number of days in that month.
 *
 */


int findNumDays(int month)
{
	int numDays; //number of days in a given month

	if (month > 12)
	{
		printf("\n***Error: Invalid month entered!***\n");
	}
	else
	{
		if (month == 9 || month == 11 || month == 4 || month == 6)
		{
			numDays = 30;
		}

		else if (month == 2)
		{
			numDays = 28;
		}
		
		else
		{
			numDays = 31;
		}

		return numDays;
	}
}



/*
 *
 * Main function
 *
 */

int main(void)
{

	int m1; // First month entered by user
	int d1; // First day entered by user
	int m2; // Second month entered by user
	int d2; // Second day entered by user
	int ans; // Final calculation var
	

	printf("\n\n***************\n\nThis program will calculate the number of days\n"
		"between two dates entered by the user and return\n"
		"the answer.\n\n***************\n\n");
	

	printf("Please enter the first date in the format MM DD: ");

	scanf( "%d", &m1 );
	scanf( "%d", &d1 );

	
	/*
	 *
	 * First Date error checking begin
	 *
	 */

	
	if ( m1 < 1 || m1 > 12 )
	{
		printf("\n***Error: Please enter a valid month!***");
		exit(1);
	}
        if ( d1 > findNumDays(m1) )
	{
		printf("\n***Error: The maximum number of days for Month %d is %d.\n", m1, findNumDays(m1));
		exit(1);
	}
	
	/*
	 *
	 * First Date error checking end
	 *
	 */
	
	printf("\nPlease enter the second date in the format MM DD: ");

	scanf( "%d", &m2 );
	scanf( "%d", &d2 );
	
	
	/*
	 *
	 * Second Date error checking begin
	 *
	 */
	 
	if (m2 < 1 || m2 > 12 )
	{
		printf("\n***Error: Month is invalid!***\n");
		exit(1);
	}
	// Check if date is out of range for specific month
	else if ( d2 > findNumDays(m2) )
	{
		printf("\n***Error: The maximum number of days for Month %d is %d.\n", m2, findNumDays(m2) );
		exit(1);
	}
	
	/*
	 *
	 * Second Date error checking end
	 *
	 */
	 
	
	else
	{
		// Check if second date preceeds first date
		
		if ( m1 > m2 )
		{
			printf("\n***Error: Date 1 cannot be AFTER Date 2***\n");
			exit(1);
		}
		else if ( m1 == m2 && d2 < d1)
		{
			printf("\n***Error: Date 1 cannot be AFTER Date 2***\n");
			exit(1);
		}

		else
		{	
			
			// Check if two dates are within the same month
			if (m1 == m2)
			{
				if (d1 == d2)
				{
					ans = 0;
					printf("\n\n***************\n\nNumber of days between the two entered dates: %d\n\n***************\n", ans);
				}
				
				else
				{
					ans = (d2 - d1) - 1; // Don't want to include end date
				
					printf("\n\n***************\n\nNumber of days between the two entered dates: %d\n\n***************\n", ans);
				}
			}
			
			
			
			else
			{
				// Get remaining days in first date entered
				
				ans = (findNumDays(m1) - d1);
				
				// Loop through months between the two dates and add number of days in each month to ans var
				
				for (int i = m1+1; i < m2; i++ )
				{
					ans += findNumDays(i);
				}
				
				
				// Add number of days from second date
				ans += d2;
			
				printf("\n\n***************\n\nNumber of days between the two entered dates: %d\n\n***************\n", ans);
			}
			

		}
	}

	return 0;

}

