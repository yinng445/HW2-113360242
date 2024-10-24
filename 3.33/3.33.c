#include <stdio.h>
#include <stdlib.h>
int main() {
    int length, breadth;
    int i, j;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    for (i = 1; i <= length; i++) {
        for (j = 1; j <= breadth; j++) {
            if (i == 1 || i == length || j == 1 || j == breadth) {
                printf("+");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
