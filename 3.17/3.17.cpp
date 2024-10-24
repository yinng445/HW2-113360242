#include <stdio.h>
#include <stdlib.h>
int main()
{
 int accountNumber;
    double beginningBalance, charges, credits, creditLimit, newBalance;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &accountNumber);

    while (accountNumber != -1) {
        printf("Enter beginning balance: ");
        scanf("%lf", &beginningBalance);
        
        printf("Enter total charges: ");
        scanf("%lf", &charges);
        
        printf("Enter total credits: ");
        scanf("%lf", &credits);
        
        printf("Enter credit limit: ");
        scanf("%lf", &creditLimit);

        newBalance = beginningBalance + charges - credits;

        if (newBalance > creditLimit) {
        	printf("Account: %d\n", accountNumber);
            printf("Credit limit: %.2lf\n", creditLimit);
            printf("Balance: %.2lf\n", newBalance);
            printf("Credit limit exceeded.\n");
        }

        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &accountNumber);
    }
    system("pause");
 return 0;
}
