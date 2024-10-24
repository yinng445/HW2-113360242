#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j;
    for (i = 1; i <= 10; i++) {                                    // (A) Pattern
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (i = 10; i >= 1; i--) {                                    // (B) Pattern
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (i = 10; i >= 1; i--) {                                    // (C) Pattern
        for (j = 1; j <= 10 - i; j++) {
            printf(" "); // print leading spaces
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (i = 1; i <= 10; i++) {                                    // (D) Pattern
        for (j = 1; j <= 10 - i; j++) {
            printf(" "); // print leading spaces
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
