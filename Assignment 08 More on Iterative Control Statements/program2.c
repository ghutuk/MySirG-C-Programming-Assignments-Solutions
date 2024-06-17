/*
Problem Description : WAP to print the first N natural numbers.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int limits ;
    printf("Enter limit to First N Natural number to print : ") ;
    scanf("%d" , &limits) ; 
    // handling the negative number 
    if(limits<0) limits = -limits ;
    // looping till limits 
    for(int i=1 ;i<=limits ;i++)
        printf("%d\t" , i) ; // print the current value of i 
    printf("\n") ; // print new line character
    return 0 ;
}