/*
Problem Description : WAP to print a given number without last digit.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter number : ") ;
    scanf("%d" , &number) ;
    printf("%d without last digit is %d\n" , number ,number/10) ;
    return 0 ;
}