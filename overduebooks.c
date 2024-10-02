#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    int charge, fineAmount;

    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    
    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 7) {
        charge = 20; 
    } else if (daysOverdue <= 14) {
        charge = 50;
    } else {
        charge = 100;
    }
    fineAmount = daysOverdue * charge;
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("charge: Ksh. %d\n", charge);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}