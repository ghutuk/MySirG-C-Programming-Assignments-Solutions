/*
Problem Description : WAP to chech whether a given number is divisible by 7 or 3.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter number to check divisibility : ") ;
    scanf("%d" , &number) ;
    if((number%7 ==0) || (number%3 == 0))
        printf("%d is divisible by either 7 or by 3\n" , number) ;
    else printf("%d is not divisible by either 7 or by 3\n" , number) ;
    return 0 ;
}