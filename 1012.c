#include <stdio.h>

int main() {

    double a, b, c, a1, a2, a3, a4, a5;
    const double pi = 3.14159;

    scanf("%lf%lf%lf", &a ,&b ,&c);

    a1 = (a * c)/2; //a área do triângulo retângulo que tem A por base e C por altura.
    a2 = (pi * (c * c)); //a área do círculo de raio C. (pi = 3.14159)
    a3 = ((a + b) * c / 2); //a área do trapézio que tem A e B por bases e C por altura.
    a4 = (b * b); //a área do quadrado que tem lado B.
    a5 = (a * b); //a área do retângulo que tem lados A e B.

    printf("TRIANGULO: %.3f\n", a1);
    printf("CIRCULO: %.3f\n", a2);
    printf("TRAPEZIO: %.3f\n", a3);
    printf("QUADRADO: %.3f\n", a4);
    printf("RETANGULO: %.3f\n", a5);
}
