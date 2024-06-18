/*
Problem Description : WAP to count digit of a given number.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int count = 0;
    long number , number_copy ;
    printf("Enter number to count digits : ") ;
    scanf("%d" , &number) ;
    number_copy = number ;
    while(number ) {
        count ++ ;
        number/=10 ;
    }

    printf("Total digits in %d are %d\n" , number_copy , count) ;

    return 0 ;
}

/* 
    Output :
        Enter number to count digits : 759965
        Total digits in 759965 are 6
*/