/*
Problem Description : WAP to check whether a given number is an even number or an odd number.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter a number to check : ") ;
    scanf("%d", &number) ;
    if(number %2 == 0) printf("%d is an even number\n" , number) ;
    else printf("%d is an odd number\n" , number) ;
    return 0 ;
}