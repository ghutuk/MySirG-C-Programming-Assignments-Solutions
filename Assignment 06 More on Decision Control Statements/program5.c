/*
Problem Description : WAP to check whether a given number is divisible by 3 and divisible by 2
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter number to check divisibility : ") ;
    scanf("%d" , &number) ;
    if(number %6 ==0) 
        printf("%d is divisible by 3 and 2\n" , number ) ;
    else printf("%d is not divisible by 3 and 2\n" , number) ;
    return 0 ;
}