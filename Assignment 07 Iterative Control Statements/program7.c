/*
Problem Description : WAP to print the first 10 even natural numbers in reverse order.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    
    for(int i=10 ;i>=1 ;i-- )
        printf("%d\t" , 2*i) ;
    printf("\n") ;

    for(int i=20 ;i>=2 ; i-=2) 
        printf("%d\t" , i) ;
    printf("\n");
    return 0 ;
}