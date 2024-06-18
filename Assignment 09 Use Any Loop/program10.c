/*
Problem Description : WAP to reverse a given number.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    signed long number ;
    signed long reversed_number = 0;
    printf("Enter number to reverse : ") ;
    scanf("%d" , &number) ;
    signed long number_copy = number ;

    while(number) {
        reversed_number = reversed_number*10 + number%10 ;
        number /= 10 ;
    }

    printf("Reversed number of %d is %d\n" , number_copy , reversed_number) ;
    return 0 ;
}
/*
    Output :
        Enter number to reverse : -123456
        Reversed number of -123456 is -654321

        Enter number to reverse : 43973
        Reversed number of 43973 is 37934
*/