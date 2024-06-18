/*
Problem Description : WAP to calculate LCM of two numbers.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number_1 , number_2 ;
    printf("Enter two numbers to find LCM : ") ;
    scanf("%d %d" , &number_1 , &number_2 ) ; 
    // get the largest number
    int max_number = (number_1 > number_2 ) ?number_1 : number_2 ;

    while(1) { // infinite loop
        if((max_number % number_1 == 0) && (max_number % number_2 == 0)) {
            printf("LCM of %d and %d is %d\n" , number_1 , number_2 , max_number) ;
            return 0;
        }
        // increment max_number by 1 
        max_number ++ ;
    }

    return 0 ;
}

/*
    Output :
        Enter two numbers to find LCM : 17 58
        LCM of 17 and 58 is 986

        Enter two numbers to find LCM : 34 12
        LCM of 34 and 12 is 204
*/