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
        {1001, "Rakesh Patel", 500.00},
        {1002, "Sunita Shah", 85.50},
        {1003, "Mahesh Jain", 12000.75},
        {1004, "Pooja Mehta", 95.00},
        {1005, "Kiran Desai", 450.25},
        {1006, "Vijay Singh", 75.00},
        {1007, "Neeta Gupta", 8000.00},
        {1008, "Amit Joshi", 150.00},
        {1009, "Sonia Verma", 60.00},
        {1010, "Raj Malhotra", 2500.00}
    };

    printLowBalance(bank, 10);

    int acc, code;
    float amt;
    printf("\nEnter Account No, Amount, Code (1=Deposit, 0=Withdraw): ");
    scanf("%d %f %d", &acc, &amt, &code);
    transaction(bank, 10, acc, amt, code);

    return 0;
}
