/*
Problem Description : WAP to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int first_number , second_number , third_number ;
    int max_one , max_two ;
    printf("Enter three number to compare : ") ;
    scanf("%d %d %d" , &first_number , &second_number ,&third_number) ;
    max_one = first_number>second_number ? first_number :second_number ;
    max_two = max_one >third_number ? max_one : third_number ;
    printf("%d is maximum out of %d %d and %d" , max_two , first_number,second_number, third_number) ;
    return 0 ;
}