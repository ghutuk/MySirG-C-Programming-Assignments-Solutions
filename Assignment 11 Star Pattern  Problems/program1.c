/*
Problem Description : WAP to print the below pattern 
    *
    * *
    * * * 
    * * * *
    * * * * * 
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int row ,col ;
    for(int row =0 ; row<5 ;row++ ) {
        for(int col = 0 ;col<=row ;col++) {
            printf("* ");
        }
        printf("\n") ;
    }
    return 0 ;
}

/*
    Output :
        * 
        * *
        * * *
        * * * *
        * * * * *
*/