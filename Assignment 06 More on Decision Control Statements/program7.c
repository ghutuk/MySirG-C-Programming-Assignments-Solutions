/*
Problem Description : WAP to check whether a given number is positive , negative or zero
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter number to check its nature : ") ;
    scanf("%d" , &number);
    if(number==0) printf("%d is a netural number\n", number) ;
    else if(number>0) printf("%d is a positive number\n", number) ;
    else printf("%d is a negative number\n" ,number) ;
    return 0 ;
}