#include <stdio.h>

typedef struct {
    int units;
    float rate;
    float total_bill;
} ElectricityBill;

// Function prototypes
ElectricityBill input();
ElectricityBill calculate_bill(ElectricityBill bill);
void output(ElectricityBill bill);

int main() {
    ElectricityBill bill;

    bill = input();
    bill = calculate_bill(bill);
    output(bill);

    return 0;
}

// Function to read input
ElectricityBill input() {
    ElectricityBill bill;

    printf("Enter units consumed:\n");
    // TODO: read units using scanf

    printf("Enter rate per unit:\n");
    // TODO: read rate using scanf

    return bill;
}

// Function to calculate bill
ElectricityBill calculate_bill(ElectricityBill bill) {

    // TODO: if units < 50 then bill = 0
    // TODO: else calculate bill = units * rate

    return bill;
}

// Function to display result
void output(ElectricityBill bill) {
    printf("\nUnits Consumed: %d\n", bill.units);
    printf("Rate per Unit: %.2f\n", bill.rate);
    printf("Total Bill: %.2f\n", bill.total_bill);
}