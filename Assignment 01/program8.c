/* 
    Problem Description : WAP to calculate square of a given number. Number is entered by the user.
    Author : Sarvesh Kushwaha
    EmailId : kushwahaghutuk9565@gmail.com 
*/
#include<stdio.h>

int main(void) {
    int number, sqnum ;
    printf("Enter the number to calculate square : ");
    scanf("%d" , &number) ;
    sqnum = number*number ;
    printf("Square of %d is %d\n" , number , sqnum) ;
    return 0;
}