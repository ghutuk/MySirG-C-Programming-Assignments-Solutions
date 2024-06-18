/*
Problem Description : WAP to check whether a given number is prime number or not.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number , i;
    printf("Enter number to check for prime : ") ;
    scanf("%d" , &number) ;
    if(number <=1) {
        printf("%d is not a prime number\n" , number) ;
    }
    else {
        for(i=2 ;i<number ;i++) {
            if(number %i == 0) {
                printf("%d is not a prime number\n" , number) ;
                return 0;
            }
        }
        if(i == number) {
            printf("%d is a prime number\n" , number) ;
        } 
    }

    return 0 ;
}

/*
    Output :
        Enter number to check for prime : 71
        71 is a prime number

        Enter number to check for prime : -23
        -23 is not a prime number

        Enter number to check for prime : 71
        71 is a prime number
*/