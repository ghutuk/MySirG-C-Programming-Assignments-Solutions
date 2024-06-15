/*
Problem Description : WAP to chech whether a given alphabet is in uppercase or lowercase.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    char ch ;
    printf("Enter character to check uppercase or lowercase : ") ;
    scanf("%c" , &ch) ;
    if(ch >= 'A' && ch <= 'Z') 
        printf("%c is a uppercase alphabet\n" , ch) ;
    else if(ch>='a' && ch<='z')
        printf("%c is lowercase alphabet\n", ch) ; 
    else printf("%c is a special character\n" , ch) ;
    return 0 ;
}