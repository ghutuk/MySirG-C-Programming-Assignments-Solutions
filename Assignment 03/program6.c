/*
Problem Description : WAP to swap value of two int variables.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int num1, num2 , temp ;
    printf("Enter two number : ") ;
    scanf("%d %d " , &num1 , &num2) ;
    printf("Before swaping values are %d and %d\n", num1 , num2) ;
    temp = num1 ;
    num1 = num2 ;
    num2 = temp ;
    printf("After swaping values are %d and %d\n", num1 , num2) ;
    return 0 ;
}