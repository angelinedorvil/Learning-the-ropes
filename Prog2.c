#include <stdio.h>
#include <stdlib.h>
/*
Assignment  M2PA
File        prog2.c

Student:    [Angeline Dorvil] [U95528605]
Date:       [10/20/2023]

Features:   [Print out stars on numbered lines based on user input]
Bugs:       [N/A]
*/

int main()
{
  printf("Welcome to Prog2\n");
  // Start by pasting inside the main the source you wrote for M2PA's prog1.c file
  //start of code from Prog1
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

        //Display nbStars star symbols
        for (int star = 0; star < nbStars; star++) {
            printf("*");
        }

        //Move to the next line for the next pattern
        printf("\n");
    }   

//End of program
  return EXIT_SUCCESS;
}
