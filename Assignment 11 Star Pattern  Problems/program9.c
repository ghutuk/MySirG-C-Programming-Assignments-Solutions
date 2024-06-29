/*
Problem Description : WAP to print the below pattern 
    ABCDE
     BCDE
      CDE
       DE 
        E
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int row, col;
    char current_char = 'A'; // Starting character

    for (row = 1; row <= 5; row++) {
        
        for (col = 1; col < row; col++) {
            printf(" "); // One space for formatting
        }

        for (col = row; col <= 5; col++) {
            printf("%c", current_char);
            current_char++;
        }

        // Reset current_char for next row
        current_char = 'A' + row;

        printf("\n");
    }
    return 0 ;
}

/*
    Output :
        ABCDE
         BCDE
          CDE
           DE
            E
*/