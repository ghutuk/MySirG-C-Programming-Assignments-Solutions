/*
Problem Description : WAP to input a character from the user and print its ASCII code.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    char ch ;
    printf("Enter characte to know ASCII code : ") ;
    scanf("%c" , &ch) ;
    printf("ASCII code of %c is %d\n" , ch , ch ) ;
    return 0 ;
}