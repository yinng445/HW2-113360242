#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double principal = 5000.00;
    double rate;
    int year;
    
    printf("Year\t10.0%%\t10.5%%\t11.0%%\11.5%%\t12.0%%\n");

    for (year = 1; year <= 15; year++) {
        printf("%d\t", year);
        for (rate = 10.0; rate <= 12.0; rate += 0.5) {
            double amount = principal * pow(1.0 + rate / 100.0, year);
            printf("%.2lf\t", amount);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
