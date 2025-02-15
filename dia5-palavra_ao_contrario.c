#include <stdio.h>
#include <string.h>

void exibir_ao_inverso(char *a){
    
    size_t tamanho = strlen(a);
    
    for (int i = tamanho - 1; i >= 0; i--) printf("%c", a[i]);
    
    putchar('\n');
}

int main()
{
    char palavra[10001];
    
    scanf("%s", palavra);
    
    size_t tamanho = strlen(palavra);
    
    exibir_ao_inverso(palavra);
    
    return 0;
}

