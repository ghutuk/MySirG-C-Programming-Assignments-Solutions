/*
Problem Description : WAP to find the area of the circle. Take radius of circle from user as input and print the result in 
            the given format : Area of circle is A having radius R. Replace A with area & R with radius.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    float radius , area;
    printf("Enter radius of circle :") ;
    scanf("%f ", &radius) ;
    area = 3.14 *radius*radius ;
    printf("Area of circle is %f having the radius %f\n",area, radius );
    return 0 ;
}