#include <stdio.h>

typedef long long ll;

int main()
{
    //multiplicacao de duas matriz 2x2
    
    ll matriz1[2][2] = {0}, matriz2[2][2] = {0}, matriz_resultante[2][2] ={0};
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%lld", &matriz1[i][j]);
        }
    }
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%lld", &matriz2[i][j]);
        }
    }
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for (int k = 0; k < 2; k++) {
                matriz_resultante[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%lld", matriz_resultante[i][j]);
            if(j<1) putchar(' ');
            if(j==1) putchar('\n');
        }
    }
    
    return 0;
}