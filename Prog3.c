#include <stdio.h>
#include <stdlib.h>
/*
File        prog3.c

Student:    [Angeline Dorvil] 
Date:       [10/30/2023]

Features:   [Adjusting the number of stars displayed based on table]
Bugs:       [N/A]
*/

int main()
{
  // Start by pasting inside the main the source you wrote for M2PA's prog2.c file
  printf("Welcome to Prog3\n");
  

  int nbStars = 0; //first variable to receive an input from user for number of stars
  printf("Please enter a value for nbStars: "); //prompt to guide user to input information for number of stars
  scanf("%d", &nbStars); 
  while (nbStars < 1 || nbStars > 3){ //making sure that user input is within the acceptable range, an input will be requested until the value is within the acceptable range
  	printf("Please try again, enter another value for nbStars: ");
  	scanf("%d", &nbStars);	
  }
  
  int nbLines = 0; //second variable to get input number from user for number of lines
  printf("\nPlease enter a value for nbLines: ");
  scanf("%d", &nbLines);
  while (nbLines < 1 || nbLines > 9){ //similar to nbStar loop which will make sure that the user input is whithin the specified range
  	printf("Please try again, enter another value for nbLines: ");
  	scanf("%d", &nbLines);	
  } //end of code from prog1
  
  for (int line = 1; line <= nbLines; line++) {
        printf("#%d ", line);

        // Determine the number of stars to be printed based on conditions
        int numStars;

        if (line == 1) {
            numStars = 1;
        } else if (line > 1 && nbStars == 1) {
            numStars = line;
        } else if (line > 1 && nbStars == 2) {
            numStars = line + (line - 1);
        } else if (line > 1 && nbStars == 3) {
            numStars = (line*3) - 2;
        } else {
            numStars = 0; // Default to 0 stars if none of the conditions match
        }

        // Display the star symbols based on appropriate formula to match the table
        for (int star = 0; star < numStars; star++) {
            printf("*");
        }      

        //Move to the next line for the next pattern
        printf("\n");
    }
  
  /*
 if line is equal to 1 then number of star to be printed is only 1. if line is equal to 2 and nbStars variable is 1 then number of stars to be printed is equal to the line number. If nbStars variable is 2 then the number of stars to be printed is equal to the line number + the number of the previous line. if nbStars variable is 3 then the number of stars to be printed is equal to the previous line number times 3 and then substract 2. */ 
 
  return EXIT_SUCCESS;
}
