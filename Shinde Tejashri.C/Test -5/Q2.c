#include <stdio.h>

void deposit(float *balance, float amount);
void withdraw(float *balance, float amount);
void displayBalance(float balance);

int main() {
    float balance = 5000.0; 
    int choice;
    float amount;

    printf("Welcome to the Bank Account Program\n");
    printf("Initial Balance: ?%.2f\n", balance);

    printf("\nChoose an option:\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter amount to deposit: ?");
            scanf("%f", &amount);
            deposit(&balance, amount);
            break;
        case 2:
            printf("Enter amount to withdraw: ?");
            scanf("%f", &amount);
            withdraw(&balance, amount);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    displayBalance(balance);

    return 0;
}


void deposit(float *balance, float amount) {
    if (amount > 0) {
        *balance += amount;
        printf("?%.2f deposited successfully.\n", amount);
    } else {
        printf("Invalid deposit amount.\n");
    }
}


void withdraw(float *balance, float amount) {
    if (*balance < 3000) {
        printf("Can't withdraw. Balance is less than ?3000.\n");
    } else if (amount <= 0) {
        printf("Invalid withdrawal amount.\n");
    } else if (amount > *balance) {
        printf("Insufficient funds. Available balance: ?%.2f\n", *balance);
    } else {
        *balance -= amount;
        printf("?%.2f withdrawn successfully.\n", amount);
    }
}


void displayBalance(float balance) {
    printf("Updated Balance: ?%.2f\n", balance);
}