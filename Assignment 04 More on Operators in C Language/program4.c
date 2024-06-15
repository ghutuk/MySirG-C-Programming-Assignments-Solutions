/*
Problem Description : WAP to make the last digit of a number stored in a variable as zero.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter the number : ") ;
    scanf("%d" , &number); 
    printf("Number before storing 0 is %d\n" , number) ;
    number /= 10 ;
    number =  number*10 ;
    printf("Number after storing 0 is %d\n" , number) ;
    return 0 ;
}