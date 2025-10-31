
#include <stdio.h>

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    // Triangle inequality check
    if ((A + B > C) && (A + C > B) && (B + C > A)) {
        double perimeter = A + B + C;
        printf("Perimetro = %.1f\n", perimeter);
    } else {
        double area = ((A + B) * C) / 2.0;
        printf("Area = %.1f\n", area);
    }



}
