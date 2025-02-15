#include <stdio.h>
#include <string.h>

/* solucao alternativa

void verificador(char *a, char *b) {
    size_t tamanho1 = strlen(a), tamanho2 = strlen(b);

    if (tamanho1 == tamanho2) {
        for (size_t i = 0; i < tamanho1; i++) {
            if (a[i] != b[i]) {
                printf("nao sao iguais\n");
                return;
            }
        }
        printf("sao iguais\n");
    } else {
        printf("nao sao iguais\n");
    }
}

*/

void remover_nl(char *a){
    
    //size_t tipo de dado, sempre positivo, contagem...
    
    size_t tamanho = strlen(a);
    
    if(tamanho>0 && a[tamanho-1] == '\n') a[tamanho - 1] = '\0';
}

int main()
{
    // obter duas strings e verificar se sao iguais (inclui espacos)
    
    char string1[10001], string2[10001];
    
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);
    
    remover_nl(string1);
    remover_nl(string2);
    
    if(strcmp(string1, string2)==0) printf("sao iguais\n");
    else printf("nao sao iguais\n");
    
    return 0;
}

