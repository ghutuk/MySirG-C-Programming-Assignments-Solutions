/*
Problem Description : WAP to swap values of two int variables in single line arithmetic expression.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    // uses of xor operation 
    int first_number , second_number ;
    printf("Enter two numbers to swap : ") ;
    scanf("%d %d" ,&first_number , &second_number) ;
    printf("Before swaping numbers are %d and %d\n" , first_number , second_number) ;
    // associativity right to left 
    first_number = first_number ^ second_number^(second_number = first_number) ;
    // second_number assign first_number 
    printf("After swaping numbers are %d and %d\n" , first_number , second_number) ;
    return 0 ;
}