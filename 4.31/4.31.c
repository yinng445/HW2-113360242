#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;  
    int i,j;
    
    for (i = 1; i <= n; i++) {
        
        for (j = i; j < n; j++) {
            printf(" ");
        }
        
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = n - 1; i >= 1; i--) {
        
        for (j = n; j > i; j--) {
            printf(" ");
        }
    
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
