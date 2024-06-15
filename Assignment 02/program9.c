/*
Problem Description : WAP to take date as an input in below given format and 
        convert the date format and display the result as given below.
        User Input Date Format : "DD/MM/YYYY"
        Output Format : Day - dd , Month - mm , Year - yyyy
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int dd , mm , yy ;
    printf("Enter the date [DD/MM/YYYY] : " );
    scanf("%d/%d/%d" , &dd , &mm , &yy); // "/" will work for delimeter of scanf function 
    printf("Day - %d , Month - %d , Year - %d ", dd , mm , yy) ;
    return 0 ;
}