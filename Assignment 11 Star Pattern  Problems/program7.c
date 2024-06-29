/*
Problem Description : WAP to print the below pattern 
    A B C D E
      A B C D
        A B C 
          A B 
            A 
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int row, col;

    for (row = 1; row <= 5; row++) {
        // Print spaces for current row
        for (col = 1; col < row; col++) {
            printf("  "); // Two spaces for formatting
        }

        // Print letters for current row
        for (col = 0; col < 5 - row + 1; col++) {
            printf("%c ", 'A' + col);
        }
        printf("\n");
    }
    return 0 ;
}

/*
  Output :
    A B C D E 
      A B C D
        A B C
          A B
            A
*/