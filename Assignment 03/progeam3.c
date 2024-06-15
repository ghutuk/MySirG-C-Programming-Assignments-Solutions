/*
Problem Description : WAP with one char type variable. Assign 'A' in the variable. 
    Now change the value of variable form 'A' to 'B' using increment operator.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    char ch = 'A' ;
    printf("Before Incrementing character is %c\n" , ch) ;
    ch++ ;
    printf("After Incrementing character is %c\n" , ch) ;
    return 0 ;
}