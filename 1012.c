#include <stdio.h>

int main() {
 float A,B,C,tri,c,tra,sq,rec;
 scanf("%f %f %f",&A,&B,&C);
 tri = 0.5 * A * C;
 c = 3.14159 * (C * C);
 tra = (A + B)/2 * C;
 sq = B * B;
 rec = A * B;
 printf("TRIANGULO: %.3f\n",tri);
 printf("CIRCULO: %.3f\n",c);
 printf("TRAPEZIO: %.3f\n",tra);
 printf("QUADRADO: %.3f\n",sq);
 printf("RETANGULO: %.3f\n",rec);
    return 0;
}
