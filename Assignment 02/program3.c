/*
Problem Description : WAP to calculate simple interest.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    float p,r ,t, si ;
    printf("Enter principal amount : ") ;
    scanf("%f", &p) ;
    printf("Enter rate :");
    scanf("%f" , &r) ;
    printf("Enter time : ") ;
    scanf("%f", &t) ;
    si = (p*r*t)/100 ;
    printf("Simple Interest is %f\n" , si) ;
    return 0 ;
}