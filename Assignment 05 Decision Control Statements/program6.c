/*
Problem Description : WAP to check whether a given number is a three digit number or not.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter number to check : ") ;
    scanf("%d"  ,&number) ;
    if(number>=100 && number<=999) 
        printf("%d is a three digit number\n" , number) ;
    else printf("%d is not a three digit number\n" , number) ;
    return 0 ;
}