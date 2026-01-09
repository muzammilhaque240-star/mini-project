#include <stdio.h>

int main() {
    float basicSalary, da, hra, grossSalary;

    // Input basic salary
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    // Calculate DA and HRA
    da = 0.35 * basicSalary;  // 35% of basic
    hra = 0.15 * basicSalary; // 15% of basic

    // Calculate Gross Salary
    grossSalary = basicSalary + da + hra;

    // Display results
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("DA (35%%): %.2f\n", da);
    printf("HRA (15%%): %.2f\n", hra);
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}