/*
Problem Description : WAP to aske user about the cost and selling price banana per dozen. 
    Calculate the profit or loss earned upon selling 25 bananas.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    float cp , sp;
    float total_cp , total_sp;
    printf("Enter the cost price of 1 dozen bananas : ");
    scanf("%f" , &cp) ;
    printf("Enter the selling price of 1 dozen bananas : ") ;
    scanf("%f", &sp) ;
    
    total_cp = cp*2 + cp/12 ;
    total_sp = sp*2 + sp/12 ;
    printf("Total profit or loss earned id %f\n" , total_sp - total_cp) ;
    return 0 ;
}