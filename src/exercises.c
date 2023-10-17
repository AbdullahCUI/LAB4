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
for(int i=1; i<=n; i++){
  //square of number
  //using predefine function
  printf("%d,",i*i);
  
  //using anthor (if) condition
  if (i<n){
    printf(",");
  }
  printf("\n");

  return 0;

}
  
  //5. Compute the summation of numbers 1 thru n and print
  //   the result; example: 1 + 2 + 3 + 4 + 5 = 15

  //start question 5 
//declared variable
  int number;
  //use printf for output 

  printf("Please Enter a number:");

  //use scanf function to read a number from user
  scanf("%d",&number);
  //if the condion is ture then return 1
  return 1;

  //use codition statment

  if(n<1){

//print output on console
    printf("Please Provide Positive Number:");
  }
  int sum=0;

//using for loop
//declared variable
  for(int i=1; i<=n; i++){

    //using printf function
    printf("%d",i);
    sum+=i;
//use if condition
    if(i<n){

      //show output 
      printf("+");
    }
    //use else condition
    else{
      //show output
      printf("%d\n",sum);
    }
    //retrun with success 
    return 0;
     }

  //6. Compute the summation of squares of numbers 1 thru n
  //   and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55

//start question 6
  int number;

  //use printf function for output 

  printf("Please Enter A Number:");

  //use scanf function to read a number from user

  scanf("%d", &number);

  //use condtion statment

  if(n<1){
    //show out on console

    printf("Please Provide Positive Number:");

    //exit on error 

    return 1;
  }
  //declared seconde variable 

  int sum=0;

  //use printf function

  printf("Square of the number:");

  //using for loop

  for(int i=1; i<=n; i++){

    //declared third variable

    int square=i*i;
//using printf function

printf("%d^2",i);

if (i<n){
  //use printf
  printf("+");
} else {
  //use printf function
  printf("=%d\n",sum);
}
return 0;
//return with successes
  }

  //7. Compute the summation of even numbers 1 thru n and print
  //   the result; example (n=5): 2 + 4 = 6

  //start question 7

  int number;

//use printf function
  printf("Please enter Number:");

  //use scanf to read a number from user
  scanf("%d",&number);

  //use conditon 
  if (n<2){

    //use printf to show output to user
    printf("Please provide a number that Greater or equal to 2:");

    return 1; //error message
  } 
  int sum_number=0;

  //sum of even numbers

  printf("Sum of even Numbers:");

  //8. Write a solution to the following variation of the FizzBuzz
  //   problem.  Print out integers 1 thru n, one to a line, except
  //   that if the integer is divisible by 7 print "Foo" instead.
  //   If the integer is divisible by 11 print "Bar" instead.  If
  //   the integer is divisible by both 7 and 11, print "FooBar"
  //   instead.

  return 0;
}
