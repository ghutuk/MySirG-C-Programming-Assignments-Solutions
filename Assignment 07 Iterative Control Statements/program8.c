/*
Problem Description : WAP to print squares ot the first 10 natural numbers.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    printf("Square of first 10 Natural numbers are...\n") ;
    for(int i=1 ;i<=10 ;i++)
        printf("Square of %d is %d\n" , i , i*i) ;
    
    return 0 ;
}