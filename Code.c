#include <stdio.h>
#include <stdlib.h>  // For srand() and rand()
#include <time.h>    // For time()

int main() {
    int num_rolls, roll, total = 0;

    // Seed the random number generator with the current time
    srand(time(0));

    printf("Welcome to the Dice Rolling game!\n");
    printf("How many times would you like to roll the dice? ");
    scanf("%d", &num_rolls);

    // Input validation: check if the number of rolls is positive
    if (num_rolls <= 0) {
        printf("Please enter a valid number of rolls.\n");
        return 1;  // Exit the program if input is invalid
    }

    printf("Rolling the dice %d times...\n", num_rolls);

    // Loop to roll the dice the specified number of times
    for (int i = 1; i <= num_rolls; i++) {
        roll = (rand() % 6) + 1;  // Generate a random number between 1 and 6
        total += roll;  // Add the roll to the total sum
        printf("Roll %d: %d\n", i, roll);  // Print each roll result
    }

    // Print the total sum of all the dice rolls
    printf("Total sum of the rolls: %d\n", total);

    return 0;  // Indicate that the program finished successfully
}
