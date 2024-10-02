//a program to compute compound interest
#include <stdio.h>
#include <math.h>
double principal, rate, time, compound;

int main()
{
    printf("Enter principal: ");
    scanf("%lf", &principal);
    printf("Enter rate: ");
    scanf("%lf", &rate);
    printf("Enter time: ");
    scanf("%lf", &time);
    compound = principal * pow(1 + rate/100, time);
    printf("Compound Interest: %.3lf\n", compound);
    return 0;
}
