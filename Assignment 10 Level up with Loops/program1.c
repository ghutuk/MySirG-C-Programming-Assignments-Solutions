/*
Problem Description : WAP to find the Nth term of the Fibonacci series.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int nth_sequence ;
    int first =0 , second =1 , next ;
    printf("Enter nth term to get ?: ") ;
    scanf("%d" , &nth_sequence) ;

    //check for positive number 
    if(nth_sequence <=0) {
        printf("Please enter a positive number!\n") ;
        return 1 ;// program terminated 
    } else if(nth_sequence ==1) {
        printf("The first term of fibonacci series is 0\n");
        return 0 ;
    }else if (nth_sequence ==2) {
        printf("The second term of fibonacci series is 1\n") ;
    }
    else {
        // calculate the nth term of the fibonacci series
        for(int i=2 ;i<nth_sequence;++i) {
            next = first+second ;
            first = second ;
            second = next ;
        }
        printf("The %d th term of fibonacci series is %d\n" , nth_sequence ,next) ;
    }
    return 0 ;
}
/*
    Output :    
        Enter nth term to get ?: -10
        Please enter a positive number!
        
        Enter nth term to get ?: 0
        Please enter a positive number!

        Enter nth term to get ?: 1
        The first term of fibonacci series is 0
        
        Enter nth term to get ?: 2
        The second term of fibonacci series is 1

        Enter nth term to get ?: 12
        The 12 th term of fibonacci series is 89
*/