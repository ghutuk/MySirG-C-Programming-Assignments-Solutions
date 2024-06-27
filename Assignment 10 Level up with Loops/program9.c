/*
Problem Description : WAP to check whether a given number is an Armstrong number or not.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int power(int digit , int times) {
    int power_number = 1 ;
    while(times--) {
        power_number *= digit ;
    }
    return power_number ;
}
int main(void) {
    int number ;
    int copy_of_number , sum =0 , number_of_digits = 0 ;
    printf("Enter number to check for armstrong number ?:") ;
    scanf("%d" , &number ) ;

    copy_of_number = number ;
   
    // calculate the number of digit 
    while(copy_of_number!=0) {
        copy_of_number /=10 ;
        number_of_digits++ ;
    }

    copy_of_number = number ;
    // calculate the sum of each digit raised to power number_of_digits 
    while(copy_of_number!=0) {
        int digit = copy_of_number %10 ;
        sum += power(digit , number_of_digits ) ;
        copy_of_number /= 10 ;
    }

    // check for armstrong number 
    if(sum == number) {
        printf("%d is an armstrong number\n" , number) ;
    }
    else {
        printf("%d is not an armstrong number\n" , number) ;
    }
    return 0 ;
}

/*
    Output :

        Enter number to check for armstrong number ?:153
        153 is an armstrong number

        Enter number to check for armstrong number ?:9474
        9474 is an armstrong number

        Enter number to check for armstrong number ?:123
        123 is not an armstrong number
*/