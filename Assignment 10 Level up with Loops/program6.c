/*
Problem Description : WAP to print all Prime numbers under 100.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    printf("All prime number under 100 are :\n") ;
    for(int i = 1 ;i <100 ;i++) {
        int count_factor = 0 ;
        for(int j =1; j<=i ;j++ ) {
            if(i%j == 0) {
                count_factor ++ ;
            }
        }
        // check for prime number 
        if(count_factor ==2) {
            printf("%d  ",i) ;
        }
    }
    printf("\n") ;
    return 0 ;
}

/*
    Output :
        All prime number under 100 are :
        2  3  5  7  11  13  17  19  23  29  31  37  41  43  47  53  59  61  67  71  73  79  83  89  97  
*/