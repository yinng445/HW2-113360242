#include <stdio.h>
#include <stdlib.h>
int main() {
    double principal, rate, interest;
    int days;

    printf("Enter loan principal (-1 to end): ");
    scanf("%lf", &principal);

    while (principal != -1) {
        printf("Enter interest rate: ");
        scanf("%lf", &rate);

        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        interest = principal * rate * days / 365;

        printf("The interest charge is $%.2lf\n", interest);

        printf("\nEnter loan principal (-1 to end): ");
        scanf("%lf", &principal);
    }
    system("pause");
    return 0;
}
