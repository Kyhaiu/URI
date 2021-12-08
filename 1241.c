#include <string.h>
#include <stdio.h>

int main(){
    int n, i, j, k, contador_igual;
    char str1[1000], str2[1000];
    
    scanf("%d", &n);
    
    for (i=0;i<n;i++){
        contador_igual = 0;
        scanf("%s %s", str1, str2);
        
        for(j= strlen(str2), k=strlen(str1); j>=0; j--, k--){
            if(str1[k] == str2[j]){
                contador_igual++;
            }
            else{
                break;
            }
        }
        if(contador_igual == strlen(str2)+1){
            printf("encaixa\n");
        }
        else{
            printf("nao encaixa\n");
        }
    }
}
