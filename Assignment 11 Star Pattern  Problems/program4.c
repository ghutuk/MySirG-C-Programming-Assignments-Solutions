/*
Problem Description : WAP to print the pattern 
    * * * * *
      * * * * 
        * * * 
          * *
            *
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int row, col;

    for (row = 1; row <= 5; row++) {
        for (col = 1; col < row; col++) {
            printf("  "); // Two spaces for formatting
        }
        
        for (col = row; col <= 5; col++) {
            printf("* ");
        }
        // Move to the next line
        printf("\n");
    }
    return 0 ;
}

/*
  Output :
  * * * * * 
    * * * *
      * * *
        * *
          *
*/