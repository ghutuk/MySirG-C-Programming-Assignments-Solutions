/*
Problem Description : WAP to print a table of N.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter the number to find the table : ") ;
    scanf("%d" , &number) ;

    printf("Table of %d is : \n" , number) ;
    for(int i=1 ;i<= 10 ;i++) {
        printf("%d X %d = %d\n" , number , i , number*i) ;
    }
    return 0 ;
}