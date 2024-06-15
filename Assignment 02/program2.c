/*
Problem Description : WAP to calculate circumference of a circle.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    float radius , circum ;
    printf("Enter the radius of circle : ");
    scanf("%f", &radius) ;
    circum = 2*3.14*radius ;
    printf("Circumference of the circle is %f\n", circum) ;
    return 0 ;
}