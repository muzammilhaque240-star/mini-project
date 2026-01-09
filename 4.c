#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, sum, digits;

    // Ask user for range
    printf("Enter the starting number of the range:1 ");
    scanf("%d", &start);
    printf("Enter the ending number of the range:100 ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    // Loop through each number in the range
    for (num = start; num <= end; num++) {
        temp = num;
        sum = 0;

        // Count number of digits
        digits = 0;
        int temp1 = num;
        while (temp1 != 0) {
            temp1 /= 10;
            digits++;
        }

        // Calculate sum of digits raised to the power of digits
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        // Check if number is Armstrong
        if (sum == num) {
            printf("%d\n", num);
        }
    }
    
    return 0;
}