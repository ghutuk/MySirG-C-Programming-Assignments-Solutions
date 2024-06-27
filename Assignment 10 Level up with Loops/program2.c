/*
Problem Description : WAP to print first N terms of Fibonacci series.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int nth_term ;
    printf("Enter nth term to print fibonacci series ?: ") ;
    scanf("%d" , &nth_term) ;
    int first = 0 , second = 1 , next_term ;
    // Fibonacci series can be found for positive numbers only 

    // check for negative and non positive number 
    if(nth_term <=0) {
        printf("Please enter positive number only!") ;
        return 1 ; // abnormal termination
    }
    else if(nth_term == 1) {
        printf("The first 1 term of Fibonacci series is : %d\n" , first) ;
        return 0 ;
    }
    else if(nth_term == 2) {
        printf("The first 2 term of Fibonacci series is : %d  %d\n" , first , second) ;
    }
    else  {
        printf("The first %d term of Fibonacci series is : \n",nth_term);
        printf("%d  %d  " , first , second) ;
        for(int i=2 ;i<nth_term ;i++) {
            next_term = first + second ;
            first = second ;
            second = next_term ;
            printf("%d  " , next_term ) ;
        }
    }
    return 0 ;
}

/* 
    Output : 
        Enter nth term to print fibonacci series ?: -23
        Please enter positive number only!

        Enter nth term to print fibonacci series ?: 1
        The first 1 term of Fibonacci series is : 0

        Enter nth term to print fibonacci series ?: 2
        The first 2 term of Fibonacci series is : 0  1

        Enter nth term to print fibonacci series ?: 20
        The first 20 term of Fibonacci series is : 
        0  1  1  2  3  5  8  13  21  34  55  89  144  233  377  610  987  1597  2584  4181  
*/