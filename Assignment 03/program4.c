/*
Problem Description : WAP to print unit digit of the a given number.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter number to get unit digits : ") ;
    scanf("%d", &number) ;
    printf("The unit digit of %d is %d\n", number , number%10) ;
    return 0 ;
}