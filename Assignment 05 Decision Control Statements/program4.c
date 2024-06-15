/*
Problem Description : WAP to check whether a given number is even or odd without using % operator.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number , ncopy;
    printf("Enter number to check : ") ;
    scanf("%d" , &number) ;
    ncopy = number ;
    if((number/2)*2 == ncopy) printf("%d is an even number\n" , ncopy) ;
    else printf("%d is an odd number\n" , ncopy) ;

    return 0 ;
}