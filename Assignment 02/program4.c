/*
Problem Description : WAP to calculate volume of cuboid.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    float side ;
    printf("Enter the side of cuboid : ");
    scanf("%f" , &side) ;
    printf("Volume of cuboid is %f\n", side*side*side);
    return 0 ;
}