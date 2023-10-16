/**
 * Author: Abdullah
 * Date: 16\10\2023
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>
#include<math.h>

int main(int argc, char **argv) {

  // if(argc != 2) {
  //   printf("Error: provide an integer\n");
  //   exit(1);
  // }

  // int n = atoi(argv[1]);
  // if(n <= 0) {
  //   printf("empty table!\n");
  //   exit(0);
  // }

  //TODO: place your code here
  //write my self code

  int number,i,j;

  printf("Please enter Number");
  scanf("%d", &number);

  for( i=1; i<=number; i++){
    printf("%4d",i);

  }
  printf("\n");

  //display the table

  for( i=1; i<=number; i++){
    printf("%2d |", i);

    for(j=1; j<=number; j++){
      printf("%4d ",i*j);
    }
    printf("\n");
  }
  
 
  return 0;
}