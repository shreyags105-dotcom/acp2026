#include <stdio.h>

typedef struct {
    int units;
    float rate, total_bill;
} ElectricityBill;

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

ElectricityBill input() {
    ElectricityBill bill;

    printf("Enter units consumed: ");
    scanf("%d",&bill.units);// TODO: read units and validate input

    printf("Enter rate per unit: ");
   scanf("%f",&bill.rate); // TODO: read rate and validate input

    return bill;
}

ElectricityBill calculate_bill(ElectricityBill bill) {

    bill.total_bill=bill.units*bill.rate;// TODO: calculate total bill using units and rate

    if (bill.units > 100) {
        printf("High consumption alert! Extra charge applied.\n");
        bill.total_bill+=bill.total_bill*0.10;;// TODO: add extra charge for units above 100
    }

    return bill;
}

void output(ElectricityBill bill) {
    printf("Units Consumed: %d\n", bill.units);
    printf("Rate per Unit: %.2f\n", bill.rate);
    printf("Total Bill: %.2f\n", bill.total_bill);
}
