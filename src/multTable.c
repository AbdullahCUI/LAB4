/**
 * Author: Abdullah
 * Date: 17\10\2023
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>
#include<math.h>

int main() 
{


  //TODO: place your code here
  //write my self code

  int number;
  
  //out put message on console

  printf("Please enter A number:");

  //to read a number use scanf

  scanf("%d", &number);

  //using for loop
//declare a variable and store a number in them
//declared a condition
//add expression
  for(int i=1; i<=number; i++){
    //printf output on console
  //%4d mean thet print 4 digit
    printf("%4d",i);

  }
  
  printf("\n");

  //now display a table
  //use for loop for table
//initialize variable
//add condition in loop
//expression in loop

  for(int i=1;  i<= number; i++){

    //print out put
    printf("-----------");

    //use third for loop 
  //initialize variable
  //add condition
  //add expression
    for(int j=1; j<=number; j++){

      //print output on console
    
    } 
  printf("%4d |", i*j);
    }
      
    

    printf("\n");
      
    }  

  
    
   
                               
    
    
    

  
 
 //program sucessesful message

