/*
Problem Description : WAP to check whether a given number is even or odd number using a bitwise operator.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter number to check : ") ;
    scanf("%d" , &number) ;
    if(number & 1 == 1) printf("%d is an odd number\n" , number) ;
    else printf("%d is an even number\n" , number) ;
    return 0 ;
}