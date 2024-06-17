/*
Problem Description : WAP to print the first N even natural numbers.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter limit for first N natural number : ") ;
    scanf("%d" ,&number) ;

    for(int i=1 ; i<=number ;i++) {
        printf("%d\t" , i*2) ;
    }
    printf("\n") ;
    return 0 ;
}