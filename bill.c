//create a electricity bill calculator using while loop,for loop and do while loop
#include <stdio.h>
int main()
{
    char CustomerName[20];
    int  CustomerID;
    float  UnitConsumed,surcharge,charges,totalBill;
    printf("Enter Customer Name:");
    scanf("%s",CustomerName);
    printf("Enter Customer ID:");
    scanf("%d",&CustomerID);
    printf("Enter Unit Consumed:");
    scanf("%f",&UnitConsumed);
    do
    {
        if (UnitConsumed <= 199) {
            totalBill = UnitConsumed * 1.20;
        } 
        else if (UnitConsumed >= 200 && UnitConsumed < 400) {
            totalBill = UnitConsumed * 1.50;
        }   
        else if (UnitConsumed >= 400 && UnitConsumed < 600) {
            totalBill = UnitConsumed * 1.80;
        }
        else {
            totalBill = UnitConsumed * 2.00;
        }
        if (totalBill >=400){
            surcharge = totalBill * 15/100;
            charges = totalBill + surcharge;
        }
        if (totalBill<100){
            printf("The total bill is less than 100");
            break;
        }
        printf("Customer Name: %s\n",CustomerName);
        printf("Customer ID: %d\n",CustomerID);
        printf("Unit Consumed: %f\n",UnitConsumed);
        printf("Total Bill: %f\n",totalBill);
        printf("Charges: %f\n",charges);
    }while(UnitConsumed = 0); 
    
    return 0;
}