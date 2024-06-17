/*
Problem Description : WAP to print the first N even natural numbers in reverse order.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter limit for first N natural number : ") ;
    scanf("%d" ,&number) ;

    for(int i=number ; i>=1 ;i--) {
        printf("%d\t" , i*2) ;
    }
    printf("\n") ;
    return 0 ;
}