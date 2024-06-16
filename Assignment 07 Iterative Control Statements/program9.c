/*
Problem Description : WAP to print cubes of the first 10 natural numbers.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    printf("Cube of first 10 Natural numbers are...\n");
    for(int i=1 ;i<=10 ;i++)
        printf("Cube of %d is %d\n" , i , i*i*i) ;
    return 0 ;
}