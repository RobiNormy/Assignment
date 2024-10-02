//a program to compute simple interest
#include <stdio.h>
// #include <math.h>
double principal, rate, time, simple;

int main()
{
    printf("Enter principal: ");
    scanf("%lf", &principal);
    printf("Enter rate: ");
    scanf("%lf", &rate);
    printf("Enter time: ");
    scanf("%lf", &time);
    simple = (principal * rate * time)/100;
    printf("Simple Interest: %.2lf\n", simple);
    return 0;
}