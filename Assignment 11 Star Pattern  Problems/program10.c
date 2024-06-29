/*
Problem Description : WAP to print below pattern on the console screen .
    *****
    *   *
    *   *
    *   *
    *****
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int row , col ;
    for (row = 1; row <= 5; row++) {
        for (col = 1; col <= 5; col++) {
            if (row == 1 || row == 5 || col == 1 || col == 5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0 ;
}

/*
    Output :
        *****
        *   *
        *   *
        *   *
        *****
*/