/*
Problem Description : WAP to swap values of two int variables without using a third variable .
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int num1 , num2 ;
    printf("Enter two number to swap: ") ;
    scanf("%d %d " , &num1 , &num2) ;
    printf("Before swaping values are %d and %d\n" , num1 , num2) ;
    num1 = num1+num2 ;
    num2 = num1 - num2 ;
    num1 = num2 - num1 ;
    printf("After swaping values are %d and %d\n" , num1 , num2) ;
    return 0 ;
}