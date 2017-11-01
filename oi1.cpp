#include <iostream>
#include <stdio.h>
using namespace std ;

int a1, a2, max ;

int recursive(int n ) {
    
    int max = 1  ;
    
    while(n != 1) {
        if(n%2 == 0) {
            max ++ ;
            n = n/2;
        }
        else
        {   
            max ++ ;
            n = 3*n + 1 ;
        }
        
        if(n == 1)
            return max;
    }
    
 
}

// 10 5 16 8 4 2 1
        
    


int main () {
    
    int maior ;
    
    while ( scanf ("%d %d", &a1, &a2) != EOF )
    {
    

    
    maior = recursive(a1) ;
    
    
    if(a2 > a1) {
        for(int i = a1 + 1; i <= a2; i++) {
            if(recursive(i) > maior)
                maior = recursive(i) ;
        }
    }
    else {
          for(int i = a2 + 1; i <= a1; i++) {
            if(recursive(i) > maior)
                maior = recursive(i) ;
        }
    }
        
        
    if(a1 != a2 ) 
        printf("%d %d %d", a1, a2, maior) ;
    if(a1 == a2)
        printf("%d %d", a1, maior) ;
        
    printf("\n");
    }
    
    return 0 ;
}
    