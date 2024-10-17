#include <stdio.h>

void calculateBill(int customerId, char customerName[20], float unitsConsumed, float *chargesPerUnit, float *totalBill, float *surcharge, float *totalAmount) {
    if (unitsConsumed < 200) {
        *chargesPerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        *chargesPerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        *chargesPerUnit = 1.80;
    } else {
        *chargesPerUnit = 2.00;
    }

    *totalBill = unitsConsumed * (*chargesPerUnit);

    if (*totalBill > 400) {
        *surcharge = *totalBill * 0.15;
    } else {
        *surcharge = 0;
    }
    *totalAmount = *totalBill + *surcharge;
    if (*totalAmount < 100) {
        *totalAmount = 100;
    }
}
int main() {
    int customerId;
    char customerName[20];
    float unitsConsumed, chargesPerUnit, totalBill, surcharge, totalAmount;
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);
    calculateBill(customerId, customerName, unitsConsumed, &chargesPerUnit, &totalBill, &surcharge, &totalAmount);
    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.1f\n", unitsConsumed);
    printf("Charges per Unit: %.1f\n", chargesPerUnit);
    printf("Total Amount to Pay: %.1f\n", totalAmount);

    return 0;
}
