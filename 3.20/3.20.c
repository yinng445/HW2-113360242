#include <stdio.h>
#include <stdlib.h>
int main() {
    int hoursWorked;
    double hourlyRate, salary;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hoursWorked);

    while (hoursWorked != -1) {
        printf("Enter hourly rate of the worker($00.00): ");
        scanf("%lf", &hourlyRate);

        if (hoursWorked > 40) {
            salary = 40 * hourlyRate + (hoursWorked - 40) * hourlyRate * 1.5;
        } else {
            salary = hoursWorked * hourlyRate;
        }

        printf("Salary is $%.2lf\n", salary);

        printf("\nEnter # of hours worked (-1 to end): ");
        scanf("%d", &hoursWorked);
    }

    return 0;
}
