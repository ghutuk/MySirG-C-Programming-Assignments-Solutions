/*
Problem Description : WAP to check whether a given year is a leap year or not.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int year ;
    printf("Enter year to check : ") ;
    scanf("%d" , &year) ;
    if((year % 4 ==0 )|| (year%400 == 0))
        printf("%d is a leap year\n", year) ;
    else printf("%d is not a leap year\n" ,year) ;
    return 0 ;
}