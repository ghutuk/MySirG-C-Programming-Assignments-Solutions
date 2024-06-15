/*
Problem Description : WAP to calculate average of three integers. Numbers are given by the user.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int a,b ,c ; //variable to store three integer number
    float avg ; // store average 
    printf("Enter three numbers : ") ;
    scanf("%d %d %d" , &a ,&b , &c) ;
    avg = (a+b+c)/3 ; // calculate the avg 
    printf("Average of three number is %f\n" , avg) ;
    return 0 ;
}