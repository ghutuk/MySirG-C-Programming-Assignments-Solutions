/* 
Problem Description : WAP to calculate sum of cubes of first N natural numbers.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int number , sum =0 ;
    printf("Enter the number : ") ;
    scanf("%d" , &number) ;
    for(int i=1 ;i<=number ;i++)
        sum += (i*i*i) ;

    printf("The sum of cubes first %d natural number is : %d\n" , number , sum) ;
    return 0 ;
}

/* 
    Output :
        Enter the number : 15
    Ther sum of cubes first 15 natural number is : 14400
*/