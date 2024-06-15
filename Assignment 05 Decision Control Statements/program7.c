/*
Problem Description : WAP to print greater between two numbers. Print one number if both are same.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int num1,  num2  ;
    printf("Enter two number : ") ;
    scanf("%d %d" , &num1 , &num2 ) ;
    if(num1 == num2) printf("%d\n") ;
    else {
        if(num1>num2)  printf("%d is max number\n" , num1) ;
        else printf("%d is a max number\n" , num2) ;
    }
    return 0 ; 
}