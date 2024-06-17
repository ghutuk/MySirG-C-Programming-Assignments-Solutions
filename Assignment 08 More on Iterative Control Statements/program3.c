/*
Problem Description : WAP to print the first N natural numbers in reverse order.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int limits ; // it will hold the value of First Natural Number 
    // printing message for the user
    printf("Enter limits for N natural number : ") ;
    // taking input from the user 
    scanf("%d" , &limits) ;

    for(int i =limits ;i>=1 ;i--) 
        printf("%d\t" , i) ; // print current value of i
    printf("\n") ; // insert new line character 
    return 0 ; // return to operating system 
}