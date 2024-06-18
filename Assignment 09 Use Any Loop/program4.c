/*
Problem Description : WAP to calculate sum of squares of first N natural numbers.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number , sum =0 ;
    printf("Enter the number : ") ;
    scanf("%d" , &number) ;
    for(int i=1 ;i<=number ;i++)
        sum += (i*i) ;

    printf("The sum of squares first %d natural number is : %d\n" , number , sum) ;
    return 0 ;
}
/*
    Output :
        Enter the number : 10
        The sum of squares first 10 natural number is : 385    
*/