/*
Problem Description : WAP to print the first N odd natural numbers.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int limits ;
    // giving message to user for taking input 
    printf("Enter the limits : ") ;
    scanf("%d" , &limits) ; // taking input from the user 
    for(int i=1 ;i <=limits ;i++)  // traversing upto limits value 
        printf("%d\t" , 2*i-1) ; // print the odd number 
    printf("\n") ; // insert a new line character 
    return 0 ;
}