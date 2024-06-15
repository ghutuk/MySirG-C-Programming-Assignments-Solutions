/*
Problem Description : WAP to take time as an input in below given format and convert the time format and display the result as 
    User Input Date Format : HH:MM
    Output Format : HH hour and MM Minute
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int hh , mm ;
    printf("Enter the time [HH:MM] : ");
    scanf("%d:%d" , &hh ,&mm) ;
    printf("%d Hour and %d Minute\n" , hh, mm );
    return 0 ;
}