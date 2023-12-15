#include <stdio.h>
#include <stdlib.h>
/*
File        prog4.c

Student:    [Angeline Dorvil] 
Date:       [10/30/2023]

Features:   [Calculate the total payoff of a dice game]
Bugs:       [N/A]
*/

void procDie(int *x);

int main() {
    printf("Welcome to Prog4\n");
    printf("\n");

    int R1 = 0; //3 dices roll
    int R2 = 0;
    int R3 = 0;

    // Get user input for the first die roll and make sure that the user inputs a number that is actually possible
    do {
        printf("Please roll the first die: ");
        scanf("%d", &R1);

        if (R1 < 1 || R1 > 6) {
            printf("Please try again, enter another value for the first die roll.\n");
        }
    } while (R1 < 1 || R1 > 6);

    printf("\n");
    // Get user input for the second die roll
    do {
        printf("Please roll the second die: ");
        scanf("%d", &R2);

        if (R2 < 1 || R2 > 6) {
            printf("Please try again, enter another value for the second die roll.\n");
        }
    } while (R2 < 1 || R2 > 6);

    printf("\n");
    // Get user input for the third die roll
    do {
        printf("Please roll the third die: ");
        scanf("%d", &R3);

        if (R3 < 1 || R3 > 6) {
            printf("Please try again, enter another value for the third die roll.\n");
        }
    } while (R3 < 1 || R3 > 6);

    printf("\n");
    printf("Here are the results of the dices rolled in order that they were rolled.\n");
    // Call the procDie function to interpret the results, assign the value based on the roll and updating each roll variable
    procDie(&R1);
    procDie(&R2);
    procDie(&R3);   

//computing the payoff that the user will get 

    int totalPay = 0; // Initialize totalPay

    if (R2 > R1 && R3 > R1) {
    	totalPay = R1;
    } else {
    	totalPay = R1; // Initialize totalPay with R1
    	if (R2 < R1) {
        	totalPay += R2;
        	if (R3 < R2) {
            		totalPay += (2 * R3);
        	} else if (R3 < R1) {
            		totalPay += R3;
        	}
    	} else if (R3 < R1) {
        	totalPay += R3;
    	}
    }

    printf("\n");
    printf("Your total payoff is: %d!\n", totalPay);

    return 0;
}

//function wich assigns a result based on the number that the user rolled. The function then updates the variable in the main body to reflect the amount of points that the user gets
void procDie(int *x) {
    if (*x == 1 || *x == 2) {
        printf("The result of the die is 1\n");
        *x = 1; // Update the value        
    } else if (*x == 3 || *x == 4) {
        printf("The result of the die is 2\n");
        *x = 2; // Update the value        
    } else if (*x == 5 || *x == 6) {
        printf("The result of the die is 3\n");
        *x = 3; // Update the value       
    }
}
