/*
Problem Description : WAP to find next Prime number of a given number.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number ;
    printf("Enter number to find next prime number of it ? : ") ;
    scanf("%d" , &number) ;
    int next_prime_number = number+1 ;
    
    // infinite loop 
    while(1) {
        // let assume each next_prime_number is a prime number 
        int is_prime = 1;
        for(int i=2 ;i<= next_prime_number/2 ;++i) {
            // if the number is divided by i then it is not a prime a number
            if(next_prime_number %i ==0) {
                is_prime = 0 ;
                break;
            }
        }
        if(is_prime ==1 ) {
            printf("%d is the next prime number of %d" , next_prime_number , number) ;
            break ;
        }

        // increment the next_prime_number by 1
        ++ next_prime_number ;
    }
    return 0 ;
}

/*
    Output :
        Enter number to find next prime number of it ? : 7
        11 is the next prime number of 7

        Enter number to find next prime number of it ? : 100
        101 is the next prime number of 100
*/