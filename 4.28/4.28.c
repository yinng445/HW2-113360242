#include <stdio.h>
#include <stdlib.h>
int main() {
    int paycode;
    double weeklyPay;
    printf("Enter employee's paycode (1: Manager, 2: Hourly worker, 3: Commission worker, 4: Pieceworker): ");
    scanf("%d", &paycode);

    switch (paycode) {
        case 1: {
            double salary;
            printf("Enter weekly salary: ");
            scanf("%lf", &salary);
            weeklyPay = salary;
            break;
        }
        case 2: {
            double hourlyWage;
            int hoursWorked;
            printf("Enter hourly wage: ");
            scanf("%lf", &hourlyWage);
            printf("Enter hours worked: ");
            scanf("%d", &hoursWorked);

            if (hoursWorked <= 40) {
                weeklyPay = hourlyWage * hoursWorked;
            } else {
                weeklyPay = hourlyWage * 40 + hourlyWage * 1.5 * (hoursWorked - 40);
            }
            break;
        }
        case 3: {
            double sales;
            printf("Enter gross weekly sales: ");
            scanf("%lf", &sales);
            weeklyPay = 250 + 0.057 * sales;
            break;
        }
        case 4: {
            double wagePerItem;
            int itemsProduced;
            printf("Enter wage per item: ");
            scanf("%lf", &wagePerItem);
            printf("Enter number of items produced: ");
            scanf("%d", &itemsProduced);
            weeklyPay = wagePerItem * itemsProduced;
            break;
        }
        default: {
            printf("Invalid paycode.\n");
            return 1;
        }
    }
    printf("Weekly pay is: $%.2lf\n", weeklyPay);
    system("pause");
    return 0;
}
