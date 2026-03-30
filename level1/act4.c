#include <stdio.h>

typedef struct {
    int consumerID;
    float unitsConsumed;
    float billAmount;
} Bill;

void input(int n, Bill bills[n]);
void calculate_Bills(int n, Bill bills[n]);
int findHighestBillIndex(int n, Bill bills[n]);
void displayHighestBill(int index, Bill bills[]);

int main() {

    int n;
    Bill bills[100];
    int index;

    printf("Enter number of consumers:\n");

    // Call function to input consumer details
    // Call function to calculate electricity bills
    // Call function to find index of highest bill
    // Call function to display highest bill

    return 0;
}

void input(int n, Bill bills[n]) {
    printf("Enter consumer details:\n");
    // Write code to read consumerID and unitsConsumed
}

void calculate_Bills(int n, Bill bills[n]) {
    // Write code to calculate billAmount
}

int findHighestBillIndex(int n, Bill bills[n]) {
    // Write code to find index of highest bill
}

void displayHighestBill(int index, Bill bills[]) {
    printf("Consumer with highest bill:\n");
    // Write code to display consumer details
}