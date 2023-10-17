/**
 * Author(s):Abdullah
 * Date:14/10/2023
 *
 * This is a series of exercises to introduce loop
 * control structures.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if(argc != 2) {
  printf("Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);

  // A simple for loop that prints 0 thru 9
  for(int i=0; i<10; i++) {
    printf("%d\n", i);
  }

  //1. Rewrite the given for loop as an equivalent while loop
  for(int i=10; i<20; i+=3) {
    printf("%d ", i);
  }
  printf("\n");
  //using while loop
  int i;
  while(i<20){
    printf("%d",i);
    i=+3;
  }
  
  }

  //2. Rewrite the given while loop as an equivalent for loop
  int k = 3;
  while(k > -4) {
    printf("%d\n ", k);
    k--;
  }
  printf("\n");

  //using for loop 
  //declared varaible
  //declared condition
  //declared expression
  for(int k=3; k>-4; k--){

    printf("%d\n",k);
  }
  }

  //3. Print numbers 1 thru n separated by a comma except for
  //   the last one; example: 1, 2, 3, 4, 5

  //declared valriable

  int number;

  //using the printf statment to inform the user to enter a number

  printf("Please enter a nubmer");

  //use the scanf function to read a number from user

  scanf("%d", & number);

  //using condtion 

  if(n>=1){

//use for loop
//declared variable
//add condition
//add expression
    for(int i=1; i>=n; i++);

    if(n<=i){
// using printf fucntion to show out put
   printf("%d,",i);
   //use else statment
    } else {
      //use printf fucntion for output
      printf("%d\n",i);
    } 
    //use else condition for 2nd if statment
    else {
      printf("Please Provide Correct Number:");
    }

    }

  }
  

  //4. Print squares of numbers 1 thru n separated by a comma
  //   except for the last one; example: 1, 4, 9, 16, 25

//star question 4 
int number;

//using printf function to show the output on console

printf("Please Enter a Number:");

//use scanf function to read a number
scanf("%d", &number);

//using conditional statment

if (n<1){
  //using printf statment

  printf("Try again Please Provide A positive Number:");

  //if thise condition is ture
  return 1;
}
//using for loop
//declared a variable
//declared condition if the condition is ture then the program is rapeating
for(int i=1; i<=n;)
  
  //5. Compute the summation of numbers 1 thru n and print
  //   the result; example: 1 + 2 + 3 + 4 + 5 = 15

  //6. Compute the summation of squares of numbers 1 thru n
  //   and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55

  //7. Compute the summation of even numbers 1 thru n and print
  //   the result; example (n=5): 2 + 4 = 6

  //8. Write a solution to the following variation of the FizzBuzz
  //   problem.  Print out integers 1 thru n, one to a line, except
  //   that if the integer is divisible by 7 print "Foo" instead.
  //   If the integer is divisible by 11 print "Bar" instead.  If
  //   the integer is divisible by both 7 and 11, print "FooBar"
  //   instead.

  return 0;
}
