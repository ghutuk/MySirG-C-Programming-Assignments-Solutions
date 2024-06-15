/*
Problem Description : WAP takes the length of the sides of a triangle as an input. 
    Display whether the triangle is valid or not 
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int first_side , second_side , third_side ;
    if(first_side+second_side >third_side) {
        if(second_side+third_side > first_side) {
            if(third_side+first_side > second_side ) {
                printf("All sides are the sides of the valid triangle\n") ;
            }
        }
    }
    else printf("All sides are the sides of the invalid triangle\n") ;
    return 0 ;
}