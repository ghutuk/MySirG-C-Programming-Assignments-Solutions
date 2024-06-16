/*
Problem Description : WAP to print a table of 5.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    printf("Table of five is...\n") ;
    for(int i=1 ;i<=10 ;i++) {
        printf("5 X %d = %d\n" , i , 5*i) ;
    }
    return 0 ;
}