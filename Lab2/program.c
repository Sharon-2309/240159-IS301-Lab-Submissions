/*
Full Name   : Sharon PETER
Student ID  : 240159
Date        : 15 March 2025
Course      : IS301 Structured Programming
Lab         : Lab 2 – Selection, Repetition Logic and Functions

Algorithm:
1. Start
2. Generate a random number between 1 and 20
3. Set number of attempts to 5
4. Repeat for 5 attempts:
    a. Call function to get user guess
    b. If guess equals random number:
        - Call function to print success message
        - Stop program
    c. Else if guess is less than number:
        - Display "Your guess is low"
    d. Else:
        - Display "Your guess is high"
5. If all attempts are used:
    - Call function to print sorry message with correct number
6. End*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
int getGuess(void);
void printHint(int guess, int number);
void printSuccess(void);
void printSorry(int number);

int main()
{
    int number, guess;
    int success = 0;

    // Seed the random number generator
    srand(time(NULL));

// Generate random number between 1 and 20
    number = (rand() % 20) + 1;

    printf("I am thinking of a number between 1 and 20.\n");
    printf("Can you guess what it is?\n");

    // Allow five attempts
    for (int i = 1; i <= 5; i++)
    {
        guess = getGuess();

        if (guess == number)
        {
            printSuccess();
            success = 1;
            break;
        }

 else
        {
            printHint(guess, number);
        }
    }

    // If user failed after five attempts
    if (!success)
    {
        printSorry(number);
    }

    return 0;
}

// Function to get user's guess
int getGuess(void)
{

int guess;
    scanf("%d", &guess);
    return guess;
}

// Function to print hint if guess is incorrect
void printHint(int guess, int number)
{
    if (guess < number)
    {
        printf("Your guess is low. Try again:\n");
    }
    else
    {
        printf("Your guess is high. Try again:\n");
    }
}

// Function to print success message
void printSuccess(void)
{
    printf("Congratulations! You did it.\n");
}

// Function to print sorry message
void printSorry(int number)
{
    printf("Sorry. The number was %d.\n", number);
    printf("You should have gotten it by now.\n");
    printf("Better luck next time.\n");
}
