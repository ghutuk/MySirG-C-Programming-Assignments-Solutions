/*
Problem Description : WAP to print all Prime numbers between two given numbers.
Author : Sarvesh kushwaha
EmailId : kushwahaghutuk9565@gmail.com
*/

#include<stdio.h>
int main(void) {
    int lower_limit , upper_limit , factor_count ;
    
    printf("Enter two number to find prime numbers between them ? : ") ;
    scanf("%d%d" , &lower_limit , &upper_limit) ;

    printf("All prime numbers between %d and %d are \n" , lower_limit , upper_limit);

    // looping to traverse from lower_limit to upper_limit
    for(int i = lower_limit+1 ; i<upper_limit;i++ ) {
        factor_count = 0;
        for(int j = 1 ; j<= i ; j++) {
            if(i%j == 0) {
                factor_count++;
            }
        }
        if(factor_count == 2) {
            printf("%d  ",i) ;
        }
    }
    printf("\n") ;
    return 0 ;
}

/*
    Output :
        Enter two number to find prime numbers between them ? : 1 100
        All prime numbers between 1 and 100 are
        2  3  5  7  11  13  17  19  23  29  31  37  41  43  47  53  59  
        61  67  71  73  79  83  89  97

        All prime numbers between 100 and 1000 are
        101  103  107  109  113  127  131  137  139  149  151  157  163  
        167  173  179  181  191  193  197  199  211  223  227  229  233  
        239  241  251  257  263  269  271  277  281  283  293  307  311  
        313  317  331  337  347  349  353  359  367  373  379  383  389  
        397  401  409  419  421  431  433  439  443  449  457  461  463  
        467  479  487  491  499  503  509  521  523  541  547  557  563  
        569  571  577  587  593  599  601  607  613  617  619  631  641  
        643  647  653  659  661  673  677  683  691  701  709  719  727  
        733  739  743  751  757  761  769  773  787  797  809  811  821  
        823  827  829  839  853  857  859  863  877  881  883  887  907  
        911  919  929  937  941  947  953  967  971  977  983  991  997
*/