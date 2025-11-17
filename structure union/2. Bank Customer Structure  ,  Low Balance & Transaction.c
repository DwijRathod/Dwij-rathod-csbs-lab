#include <stdio.h>
#include <string.h>

struct Customer {
    int acc_no;
    char name[50];
    float balance;
};

void printLowBalance(struct Customer c[], int n) {
    printf("\nCustomers with balance < Rs.100:\n");
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(c[i].balance < 100) {
            printf("Acc: %d | Name: %s | Balance: %.2f\n",
                   c[i].acc_no, c[i].name, c[i].balance);
            found = 1;
        }
    }
    if(!found) printf("No customer has balance below Rs.100\n");
}

void transaction(struct Customer c[], int n, int acc, float amt, int code) {
    for(int i = 0; i < n; i++) {
        if(c[i].acc_no == acc) {
            if(code == 1) { // Deposit
                c[i].balance += amt;
                printf("Deposit Successful! New Balance: %.2f\n", c[i].balance);
            } else if(code == 0) { // Withdrawal
                if(c[i].balance >= amt) {
                    c[i].balance -= amt;
                    printf("Withdrawal Successful! New Balance: %.2f\n", c[i].balance);
                } else {
                    printf("The balance is insufficient for the specified withdrawal.\n");
                }
            }
            return;
        }
    }
    printf("Account %d not found!\n", acc);
}

int main() {
    struct Customer bank[10] = {
        {1001, "briesh shah", 530.00},
        {1002, "tanay chauhan", 185.50},
        {1003, "mann rajput", 1200.75},
        {1004, "mamta singh", 958.00},
        {1005, "priya beniwal", 4500.25},
        {1006, "bhuvan bhat", 715.00},
        {1007, "Neeta Gupta", 80300.00},
        {1008, "abhishek aggarwal", 120.00},
        {1009, "ankit gupta", 600.00},
        {1010, "bhavna oberoi", 2550.00}
    };

    printLowBalance(bank, 10);

    int acc, code;
    float amt;
    printf("\nEnter Account No, Amount, Code (1=Deposit, 0=Withdraw): ");
    scanf("%d %f %d", &acc, &amt, &code);
    transaction(bank, 10, acc, amt, code);

    return 0;
}
