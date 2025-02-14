#include <stdio.h>

typedef long long ll;

int main()
{
    // armazenar 5 valores inteiros e imprimir
    
    ll armazena_valores[5];
    
    for(int i=0; i<5; i++) scanf("%lld", &armazena_valores[i]);
    for(int i=0; i<5; i++) printf("%lld\n", armazena_valores[i]);

    return 0;
}