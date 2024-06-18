/*
Problem Description : WAP to calculate sum of first N even natural numbers.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number , sum  =0 ;
    printf("Enter the number : ") ;
    scanf("%d" , &number) ;
    for(int i=1 ;i<=number ;i++)
        sum+= 2*i ;

    printf("The  sum of first %d even natural number is : %d\n" , number , sum) ;
    return 0 ;
}
/*
    Output :
        Enter the number : 10
        The sum of first 10 even natural number is : 110
*/