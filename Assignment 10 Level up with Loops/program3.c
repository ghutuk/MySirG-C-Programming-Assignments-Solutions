/*
Problem Description : WAP to check whether a given number is there in the Fibonacci series or not.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    // 5n^2+4 | 5n^2-4
    int fibonacci_num ;
    int first = 0 , second = 1  ,next ;
    printf("Enter a fibonacci number to check ?: ") ;
    scanf("%d" ,&fibonacci_num) ;

    // check for negative number 
    if(fibonacci_num <0 ) {
        printf("%d is not there in the Fibonacci Series\n", fibonacci_num) ;
        return 0 ;
    }
    // check for first and second term 
    else if( fibonacci_num == 0 || fibonacci_num ==1) {
        printf("%d is there in the Fibonacci Series\n" , fibonacci_num) ;
        return 0 ;
    }
    // check till given number 
    else {
        next = 0 ;
        while(next < fibonacci_num) {
            next = first + second ;
            first = second ;
            second = next ;

            // check the given number is present in series or not 
            if(next == fibonacci_num) {
                printf("%d is present in the Fibonacci series \n" , fibonacci_num) ;
                return 0 ; 
            }
        }

        // if the number is not found in the fibonacci series 
        printf("%d is not present in the Fibonacci series\n" , fibonacci_num) ;
    }
    return 0 ;
}

/*
    Output :
        Enter a fibonacci number to check ?: 8
        8 is present in the Fibonacci series 

        Enter a fibonacci number to check ?: 10
        10 is not present in the Fibonacci series

        Enter a fibonacci number to check ?: -25
        -25 is not there in the Fibonacci Series

        Enter a fibonacci number to check ?: 0
        0 is there in the Fibonacci Series

        Enter a fibonacci number to check ?: 1
        1 is there in the Fibonacci Series

        Enter a fibonacci number to check ?: 144
        144 is present in the Fibonacci series
*/