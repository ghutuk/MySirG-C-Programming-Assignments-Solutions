/*
Problem Description : WAP to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. 
    Now display whether the candidate passed the examination or failed.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int first , second, third , fourth , fifth ;
    printf("Enter the marks of five subject\n" ) ;
    scanf("%d %d %d %d %d" , &first, &second ,&third , &fourth ,&fifth) ;
    if(first<33 || second <33 || third <33 || fourth < 33 || fifth < 33)
        printf("Student is failed in the examination\n") ;
    else printf("Student is passed in the examination\n") ;
    return 0 ;
}