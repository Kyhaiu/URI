#include <stdio.h>
#include <string.h>

int main(){
    int n, i;
    char valores[14];
    int val1, val2, val3;

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%s", valores);
        val1=(valores[2]-'0')*10+valores[3]-'0';
        val2=(valores[5]-'0')*100+(valores[6]-'0')*10+valores[7]-'0';
        val3=(valores[11]-'0')*10+valores[12]-'0';
        printf("%d\n", val1+val2+val3);
    }
}
