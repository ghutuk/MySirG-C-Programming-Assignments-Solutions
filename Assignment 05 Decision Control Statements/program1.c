/*
Problem Description : WAP to check whether a given number is positive or non positive
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter the number to check  : ") ;
    scanf("%d" , &number) ;
    if(number < 0) printf("%d is negative number\n", number) ;
    else if(number > 0) printf("%d is positive number\n" , number) ;
    else printf("%d is zero\n" , number) ;
    return 0 ;
}