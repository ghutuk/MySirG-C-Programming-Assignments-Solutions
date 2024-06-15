/*
Problem Description : WAP to check whether a given character is an alphabet(upercase) , an alphabet(lowercase) , a digit or a special character
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    char ch ;
    printf("Enter character to check : ") ;
    scanf("%c" , &ch ); 
    if(ch>= 'A' && ch <= 'Z') 
        printf("%c is a uppercase alphabet\n",ch) ;
    else if(ch>= 'a' && ch<='z' )  printf("%c is a lowercase alphabets\n" , ch) ;
    else if(ch >= '0' && ch <= '9') printf("%c is the digit\n" , ch) ;
    else printf("%c is a special character\n" , ch) ;
    return 0 ;
}