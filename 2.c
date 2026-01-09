#include <stdio.h>
#include <math.h> // for sqrt()

int main() {
    double a, b, c;
    double root1, root2, discriminant;

    // Example coefficients
    a = 1;
    b = -5;
    c = 6;

    // Calculate discriminant
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        // One real root (both roots are equal)
        root1 = root2 = -b / (2*a);
        printf("Both roots are equal: %.2lf\n", root1);
    } else {
        // Complex roots
        double realPart = -b / (2*a);
        double imagPart = sqrt(-discriminant) / (2*a);
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}