#include <stdio.h>

int main() {
    int i, j, n, fact;
    float x, sum = 0.0, num;
    int sign = 1;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        fact = 1;
        for (j = 1; j <= i; j++) {
            fact *= j;
        }

        num = 1.0;
        for (j = 1; j <= i; j++) {
            num *= x;
        }

        sum += sign * (num / fact);
        sign *= -1;
    }

    printf("Sum of sine series = %f\n", sum);

    return 0;
}
