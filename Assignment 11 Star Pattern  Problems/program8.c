/*
Problem Description : WAP to print the below pattern 
    1
    2 3
    4 5 6 
    7 8 9 10 
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int row, col;
    int num = 1; // Starting number

    for (row = 1; row <= 4; row++) {
        // Print numbers for current row
        for (col = 1; col <= row; col++) {
            printf("%d ", num);
            num++;
        }
        
        printf("\n");
    }
    return 0 ;
}

/*
    Output :
        1 
        2 3
        4 5 6
        7 8 9 10
*/