 #include <stdio.h>

 int main(){

    int dist;
    double gasto, consumo;

    scanf("%d", &dist);
    scanf("%lf", &gasto);

    consumo = dist / gasto;

    printf("%.3f km/l\n", consumo);
 }
