#include <stdio.h>

typedef long long ll;

int main()
{
    ll armazena_valores[10];
    
    for(int i = 0; i<10; i++) scanf("%lld", &armazena_valores[i]);
    
    ll maior_valor = armazena_valores[0], menor_valor = armazena_valores[0];
    
    for(int j = 0; j<10; j++){
        
        if(maior_valor<armazena_valores[j]) maior_valor = armazena_valores[j];
        if(menor_valor>armazena_valores[j]) menor_valor = armazena_valores[j];
    }
    
    printf("o maior valor eh %lld\no menor valor eh %lld\n", maior_valor, menor_valor);

    return 0;
}