/* Q9: Write a program to calculate simple and compound interest for given
   principal, rate, and time. */
#include <stdio.h>

int main() {
    float principal, rate, si, ci, amount;
    int time, i;

    printf("Enter principal: ");
    scanf("%f", &principal);
    printf("Enter rate (%%): ");
    scanf("%f", &rate);
    printf("Enter time (years): ");
    scanf("%d", &time);

    /* Simple Interest = (P * R * T) / 100 */
    si = (principal * rate * time) / 100;

    /* Compound Interest: multiply the amount by (1 + rate/100) once for each year */
    amount = principal;
    for (i = 1; i <= time; i++) {
        amount = amount + (amount * rate / 100);
    }
    ci = amount - principal;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}
