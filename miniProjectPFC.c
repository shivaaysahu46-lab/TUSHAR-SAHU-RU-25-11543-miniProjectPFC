#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number;
    int guess;
    int i;
    int limit = 5; // We give 5 chances

    // This line makes sure the number is random every time
    srand(time(0));
    
    // Generate a number between 1 and 100
    secret_number = rand() % 100 + 1;

    printf("I have chosen a number between 1 and 100.\n");
    printf("You have 5 chances to guess it.\n\n");

    // Start the loop for limited attempts
    for(i = 1; i <= limit; i++) {
        
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if(guess == secret_number) {
            printf("\nYOU WIN! You guessed the correct number!\n");
            // If they win, we end the program immediately
            return 0; 
        }
        else if(guess > secret_number) {
            printf("Hint: Your number is too HIGH.\n");
        }
        else {
            printf("Hint: Your number is too LOW.\n");
        }
    }

    // If the loop finishes, it means the user lost
    printf("\nYOU LOSE! The secret number was %d.\n", secret_number);

    return 0;
}
