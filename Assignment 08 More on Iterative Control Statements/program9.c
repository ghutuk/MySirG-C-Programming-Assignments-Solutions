/*
Problem Description : WAP to print cubes of the first N natural numbers.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter the limit for first N natural number : ") ;
    scanf("%d" , &number) ;

    printf("The cubes of first %d natural number are : " ,number) ;
    for(int i=1 ;i<=number ;i++)    
        printf("%d\t" ,i*i*i) ;
    printf("\n") ;
    return 0 ;
}