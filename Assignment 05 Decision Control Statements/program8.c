/*
Problem Description : WAP check whether roots of a given quadratic equation are real & distinct , real& equal or imaginary roots.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    // a,b and c 
    int coeff_of_xsquare , coeff_of_x , costant_term ;
    int discriminant = coeff_of_x * coeff_of_x - 4*coeff_of_xsquare*costant_term ;
    if(discriminant == 0) {
        printf("Roots are real and equal\n") ;
    }
    else if(discriminant >0 ) {
        printf("Roots are real and distinct\n") ;
    }
    else printf("Roots are imaginary\n") ;
    return 0 ;
}