#include <stdio.h>

int main() {

    const double pi = 3.14159;
    double r, volume, const2;

    scanf("%lf", &r);
    const2 = (4.0/3);

    volume = (const2 * pi * (r * r * r));

    printf("VOLUME = %.3lf\n", volume);
}
