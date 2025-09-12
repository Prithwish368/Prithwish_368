#include <stdio.h>

int main() {
    float n1, n2;

    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);


    printf("Addition = %.2f\n", n1 + n2);
    printf("Subtraction = %.2f\n", n1 - n2);
    printf("Multiplication = %.2f\n", n1 * n2);

    if(n2 != 0) {
        printf("Division = %.2f\n", n1 / n2);
        printf("Remainder = %d\n", (int)n1 % (int)n2);
    } else {
        printf("Division and Remainder not possible (denominator = 0)\n");
    }

    return 0;
}
