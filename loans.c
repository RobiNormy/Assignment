#include <stdio.h>

int main() {
    int Year;
    float income;
    int DOB;
    int Age;

    // Input from user
    printf("Enter Year: ");
    scanf("%d", &Year);
    
    printf("Enter DOB:");
    scanf("%d",&DOB);
    
    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);
    Age = Year - DOB;
 // Check loan eligibility
    if (Age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
