/*
Problem Description : WAP to print all Armstrong numbers under 1000.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include <stdio.h>
int power(int digit , int times) {
    int product = 1 ;
    while(times--) {
        product*=digit ;
    }
    return product ;
}
int main(void)
{   
    printf("The all Armstrong number under 1000 are :\n") ;
    for(int number = 1; number <= 1000; number++) {
        int copy_of_number = number ,  sum = 0, number_of_digits = 0;

        // calculate the number of digit
        while (copy_of_number != 0) {
            copy_of_number /= 10;
            number_of_digits++;
        }

        copy_of_number = number;
        // calculate the sum of each digit raised to power number_of_digits
        while (copy_of_number != 0) {
            int digit = copy_of_number % 10;
            sum += power(digit, number_of_digits);
            copy_of_number /= 10;
        }

        // check for armstrong number
        if (sum == number){
            printf("%d  ", number);
        }
    
    }
    return 0;
}

/*
    Output :
        The all Armstrong number under 1000 are :
        1  2  3  4  5  6  7  8  9  153  370  371  407 
*/