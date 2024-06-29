/*
Problem Description : WAP to print the below pattern
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

    for (row = 5; row >= 1; row--) {
        // Print asterisks for current row
        for (col = 1; col <= row; col++) {
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