/*
Problem Description : WAP to input an ASCII code from the user and print its corresponding character.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int code ;
    printf("Enter ASCII code to know character : ") ;
    scanf("%d" , &code) ;
    printf("Character of ASCII code %d is %c\n" , code);
    return 0 ;
}