/**
 * This program plays a guessing game with the user.
 * It selects a random number between 1 and 1000 and
 * prompts the user to guess the value, informing them
 * of whether or not it is higher or lower than the
 * actual value.  Once the user guesses correctly, the
 * game ends and the number of guesses is displayed.
 * 
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv) {

  // the game will be played by creating a random
  // number between 1 and 1000
  int n = 1000;

  // seed the random number generator
  srand(time(NULL));
  // the program generates a random number between 1 and 1000
  // the user will try to guess what this number is
  int number = (rand() % n) + 1;

  // initialize the user's "guess" to be an invalid value
  int guess = -10;
  int numGuesses = 0;

  printf("Guess-A-Number Game!\n");
  printf("Enter a number between 1 and %d\n", n);

  //TODO: place your code here

  //using do while loop for guesses gaming

  do{
 //printf is predefine fucntioon which show the resutl on console
    printf("Please enter a NUmber For Guesses Game:\n");
 
 //using scanf predefine function to read number from user
    scanf("%d",&numGuesses);

    //using conditional statment 
  //if user enter number(numguesse) is greater than number
    if(numGuesses>number){

      //using printf to show the message to user

      printf("Number is to High:Please try again:\n");

 // using condition if the number is less than declared number than this statment show the give message
    } else if (numGuesses<number){

      //showing the message to user that we use printf funtion
      printf("The number is to low :Please try again:\n");

//using else statment to show if the if and if-else statment is false then the else is correct
    }else {
    printf("Congratulations, you found it!  Number of guesses: %d\n", numGuesses);
  
  } 
  //using while 
  }while (numGuesses !=number);

  
  return 0;