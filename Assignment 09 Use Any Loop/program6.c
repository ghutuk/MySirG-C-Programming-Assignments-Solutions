/*
Problem Description : WAP to calculate factorial of a number.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ,product = 1;
    printf("Enter the positive number to find factorail : ") ;
    scanf("%d" , &number) ;
    for(int i=1 ;i<=number ;i++)
        product *= i ;

    printf("The factorial of %d is %d\n" , number , product) ;
    return 0 ;
}

/* 
    Output :
        Enter the positive number to find factorail : 7
        The factorial of 7 is 5040
*/