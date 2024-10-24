#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double sales, salary;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%lf", &sales);

    while (sales != -1) {
        salary = (0.09 * sales)+200;
        printf("Salary is: $%.2lf\n", salary);
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf", &sales);
    }
    system("pause");
    
 return 0;
}
