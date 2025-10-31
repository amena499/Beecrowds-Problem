#include <stdio.h>

int main() {
    double a, b, c, A, B, C, temp;

    scanf("%lf %lf %lf", &a, &b, &c);

    // Sort in descending order: A >= B >= C
    if (a < b) { temp = a; a = b; b = temp; }
    if (a < c) { temp = a; a = c; c = temp; }
    if (b < c) { temp = b; b = c; c = temp; }

    A = a; B = b; C = c;

    // Check if it forms a triangle
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        // Right triangle
        if (A*A == B*B + C*C)
            printf("TRIANGULO RETANGULO\n");
        else if (A*A > B*B + C*C)
            printf("TRIANGULO OBTUSANGULO\n");
        else
            printf("TRIANGULO ACUTANGULO\n");

        // Equilateral
        if (A == B && B == C)
            printf("TRIANGULO EQUILATERO\n");
        // Isosceles
        else if (A == B || B == C || A == C)
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
