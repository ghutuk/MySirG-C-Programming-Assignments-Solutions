/*
Problem Description : WAP to print the below pattern 
    1
    1 2
    1 2 3
    1 2 3 4 
    1 2 3 4 5
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {

    int row, col;

    for (row = 1; row <= 5; row++) {
        // Print numbers for current row
        for (col = 1; col <= row; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0 ;
}

/*
    Output :
        1 
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
*/