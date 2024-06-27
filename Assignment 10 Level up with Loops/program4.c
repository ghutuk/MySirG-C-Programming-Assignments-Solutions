/*
Problem Description : WAP to calculate HCF of two numbers.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int first_number , second_number , hcf ;
    int copy_first_number , copy_second_number , remainder ;

    printf("Enter two number to find HCF?: ") ;
    scanf("%d %d" ,&first_number , &second_number) ; 
    
    // check if both are numbers are zero  
    if(first_number == 0 && second_number ==0 ) {
        // hcf is not defined 
        printf("The HCF of %d and %d is not defined \n" , first_number , second_number ) ;
        return 1 ; // it indicate an error 
    }

    // copy both numbers 
    copy_first_number = first_number ;
    copy_second_number = second_number ;

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
    printf("The HCF of %d and %d is %d" , copy_first_number , copy_second_number , hcf) ;

    return 0 ;
}
/*
    Output :
        Enter two number to find HCF?: 56 98
        The HCF of 56 and 98 is 14

        Enter two number to find HCF?: 0 5
        The HCF of 0 and 5 is 5

        Enter two number to find HCF?: 1071 462
        The HCF of 1071 and 462 is 21

        Enter two number to find HCF?: -48 18
        The HCF of -48 and 18 is 6
*/