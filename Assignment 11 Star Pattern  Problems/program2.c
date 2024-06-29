/*
Problem Description : WAP to print the below pattern 
            *
          * *
        * * *
      * * * *
    * * * * *
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
  int row , col ;
  for(row = 1 ;row<=5 ; row++ ) {
    // print spaces for current row 
    for(col = row ; col < 5 ; col++) {
      printf("  ") ; //  two spaces for formatting
    }
    // print *
    for(col = 1 ; col <= row ;col++) {
      printf("* ") ;
    }
    // go the next line 
    printf("\n") ;
  }
  return 0 ;
}

/*
  Output :
        * 
      * *
    * * *
  * * * *
* * * * *
*/