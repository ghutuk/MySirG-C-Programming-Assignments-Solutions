/*
Problem Description : WAP to input three characters from the user and
         display characters with their corresponding ASCII code.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    char a,b,c ;// three var to store three char 
    printf("Enter three character to know ASCII code : ") ;
    scanf("%c %c %c" , &a ,&b ,&c) ;
    printf("ASCII code of %c is %d\n",a);
    printf("ASCII code of %c is %d\n",b);
    printf("ASCII code of %c is %d\n", c);
    return 0 ;
}