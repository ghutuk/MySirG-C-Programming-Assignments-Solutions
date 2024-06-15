/* 
    Problem Description : WAP to calculate sum of two integer. Numbers are taken from the user through keyboard.
    Author : Sarvesh Kushwaha
    EmailId : kushwahaghutuk9565@gmail.com 
*/

#include<stdio.h>
int main(void) {
    int x ,y ;
    printf("Enter two numbers to add : ");
    scanf("%d %d",&x , &y) ;
    printf("Sum of %d and %d is %d\n" , x , y , x+y) ;
    return 0;
}