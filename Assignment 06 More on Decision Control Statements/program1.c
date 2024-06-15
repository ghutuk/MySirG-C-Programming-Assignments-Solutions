/*
Problem Description : WAP to check whether a given number is a three digit or not.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter number to check : ") ;
    scanf("%d" , &number) ;
    if(number>99 && number<1000)
        printf("%d is a three digit number\n" , number) ;
    else printf("%d is not a three digit number\n" , number) ;
    return 0 ;
}