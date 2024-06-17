/*
Problem Description : WAP to print MySirG N times on the screen.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number_of_times ;

    printf("How many times you want to print : ") ;

    scanf("%d" , &number_of_times) ; 

    //  looping n times 
    for(int i=0 ;i<number_of_times ;i++) 
        printf("MySirG\t") ; // print the given message on the console screen 
    printf("\n") ; // insert a new line character on the console screen
    return 0 ;
}