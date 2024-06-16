/*
Problem Description : WAP to print the first 10 Odd natural numbers.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    for(int i=1 ;i<=10 ;i++) 
        printf("%d\t" , 2*i-1) ;
    printf("\n");

    for(int i=1 ;i<=20 ;i+=2)
        printf("%d\t" , i) ;
    printf("\n") ;
    return 0 ;
}