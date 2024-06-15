/*
Problem Description : WAP to calculate area of a rectangle. Input appropriate data fron the user.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    float len, bd , area;
    printf("Enter lenght and breadth : ") ;
    scanf("%f %f" , &len , &bd) ;
    area = bd*len ;
    printf("The area of rectangle is %f\n" , len*bd) ;
    return 0 ;
}