/*
Problem Description : WAP to take a three digit number from the user and rotate its digits by one position towards the right.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    int mod_digit = 0 , rotated_number ;
    printf("Enter number to rotate its digits by one position to right : ") ;
    scanf("%d" , &number) ;
    printf("Before rotating one digits number is %d\n" , number ) ;
    mod_digit = number %10 ;
    number /= 10 ;
    mod_digit *= 100 ;
    rotated_number = mod_digit + number ;
    printf("After rotating one digits number is %d\n" , rotated_number ) ;
    return 0 ;
}