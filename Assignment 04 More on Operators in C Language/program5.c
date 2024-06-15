/*
Problem Description : WAP to input a number from the user and also input a digit . Append a digit in the 
    number and print the resulting number .
    Example : number = 234 , digit = 9 , resulting number = 2349
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number , digit ;
    printf("Enter a number : ") ;
    scanf("%d" , &number) ;
    printf("Enter a digit to append in number : ") ;
    scanf("%d" , &digit ) ;
    printf("Before appending %d to number is %d\n" , digit , number) ;
    number *= 10 ;
    number += digit ;
    printf("After appending %d to number is %d\n", digit,number) ;
    return 0 ;
}