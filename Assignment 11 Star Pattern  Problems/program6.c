/*
Problem Description : WAP to print the below pattern 
    1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int row, col;

    for (row = 1; row <= 5; row++) {
        // print number in descending order 
        for (col = row; col >= 1; col--) {
            printf("%d ", col);
        }
        // Move to the next line
        printf("\n");
    }
    return 0 ;
}

/* 
    Output :
        1 
        2 1
        3 2 1
        4 3 2 1
        5 4 3 2 1
*/