#include<stdio.h>

int main(){

    double tempo, vel, gasto;

    scanf("%lf%lf", &tempo, &vel);

    gasto = (vel * tempo) / 12;

    printf("%.3f\n", gasto);
}
