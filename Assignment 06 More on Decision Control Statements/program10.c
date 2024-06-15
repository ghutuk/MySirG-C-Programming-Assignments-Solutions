/*
Problem Description : WAP which takes the month number as an input and display number of days in that month.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    //2 4 6 9 11 
    int month_number ;
    printf("Enter month number to check : ") ;
    scanf("%d", &month_number) ;
    if(month_number == 2) 
        printf("This month has 28 or 29 days\n") ;
    else if((month_number==4) ||(month_number ==6) || (month_number ==9) || (month_number ==11)) 
        printf("This month has 30 days\n") ;
    else printf("This month has 31 days\n") ;
    return 0  ;
}