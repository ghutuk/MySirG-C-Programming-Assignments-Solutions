/*
Problem Description : Assume price of 1USD is INR 84.23. WAP to take the amount in INR and convet it into USD.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    const float usd = 84.23 ;
    float inr, inr_to_usd  ;
    printf("Enter INR price to convert in usd : ") ;
    scanf("%f" , &inr) ;
    inr_to_usd = inr /usd ;
    printf("INR %f is equal to USD %f\n", inr , usd) ;
    return 0 ;
}