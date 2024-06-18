/*
Problem Description : WAP to calculate sum of first N natural numbers. 
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number, sum =0 ;
    printf("Enter the natural number to find sum : ") ;
    scanf("%d" , &number) ;

    for(int i=1 ;i<=number ;i++)
        sum+=i ;
    printf("The sum of first %d natural number is : %d\n" ,number , sum  ) ;

    return 0 ;
}

/*
    Output : 
        Enter the natural number to find sum : 10
        The sum of first 10 natural number is : 55
*/