/*
Problem Description : WAP to check whether a given numbers are co-prime numbers or not.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

// co-number : numbers whose HCF is 1 

#include<stdio.h>
int main(void) {
    int first_number , second_number , hcf ;
    int copy_first_number , copy_second_number , remainder ;

    printf("Enter two number to check numbers are co-prime?: ") ;
    scanf("%d %d" ,&first_number , &second_number) ; 

    // copy both numbers 
    copy_first_number = first_number ;
    copy_second_number = second_number ;

    // check if both are numbers are zero  
    if(first_number == 0 && second_number ==0 ) {
        // hcf is not defined 
        printf("%d and %d are not co-prime numbers\n" , first_number , second_number ) ;
        return 1 ; // it indicate an error 
    }

    // keep maximum number in first_number
    if(second_number > first_number ) {
        // swap the numbers using third variable 
        int temp = first_number ;
        first_number = second_number ;
        second_number = temp ;
    }

    // finding the hcf 
    while(second_number!=0 ) {
        remainder = first_number % second_number ;
        first_number = second_number ;
        second_number = remainder ;
    }
    // first_number is the required HCF 
    hcf = first_number ; 

    if(hcf == 1) {
        printf("%d and %d are co-prime numbers\n" , copy_first_number , copy_second_number) ;
    }
    else {
        printf("%d and %d are not co-prime numbers\n" , copy_first_number , copy_second_number) ;
    }

    return 0 ;
}

/*
    Output :
        Enter two number to check numbers are co-prime?: 15 28
        15 and 28 are co-prime numbers

        Enter two number to check numbers are co-prime?: 7 14
        27 and 14 are not co-prime numbers

        Enter two number to check numbers are co-prime?: 25 32
        25 and 32 are co-prime numbers

        Enter two number to check numbers are co-prime?: 0 0
        0 and 0 are not co-prime numbers
*/