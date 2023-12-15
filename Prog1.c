#include <stdio.h>
#include <stdlib.h>
/*
File        prog1.c

Student:    [Angeline Dorvil] 
Date:       [10/30/2023]

Features:   [Receives inputs from user to complete patterns of symbols]
Bugs:       [N/A]
*/

int main(void)
{
  printf("Welcome to Prog1\n");
  int nbStars = 0; //first variable to receive an input from user for number of stars
  printf("Please enter a value for nbStars: "); //prompt to guide user to input information for number of stars
  scanf("%d", &nbStars); 
  while (nbStars < 1 || nbStars > 3){ //making sure that user input is within the acceptable range, an input will be requested until the value is within the acceptable range
  	printf("Please try again, enter another value for nbStars: ");
  	scanf("%d", &nbStars);	
  }
  
  int nbLines = 0; //second variable to get input number from user for number of lines
  printf("Please enter a value for nbLines: ");
  scanf("%d", &nbLines);
  while (nbLines < 1 || nbLines > 9){ //similar to nbStar loop which will make sure that the user input is whithin the specified range
  	printf("Please try again, enter another value for nbLines: ");
  	scanf("%d", &nbLines);	
  }
 //End of the program
  return EXIT_SUCCESS;
}
