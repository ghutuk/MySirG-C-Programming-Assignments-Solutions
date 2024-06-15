/*
Problem Description : WAP to input a three digit number and display sum of the digits.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number , sum = 0;
    int num = number ; // copy of original number 
    printf("Enter the three digit number : ") ;
    scanf("%d" , &number) ;
    sum += number%10 ;
    number /= 10 ;
    sum += number%10 ;
    number /= 10 ;
    sum += number%10 ;
    printf("Sum of all digit of %d is %d\n" , num , sum ) ;
    return 0 ;
}