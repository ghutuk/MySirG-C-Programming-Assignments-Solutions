/*
Problem Description : WAP to swap values of two int variables without using third variable and arithmetic operators.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int num1 , num2 ;
    printf("Enter two number : ") ;
    scanf("%d %d " , &num1 , &num2 ) ;
    num1 = num1^num2 ;
    
    return 0 ;
}