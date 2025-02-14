#include <stdio.h>

void eh_primo(int a){
    
    int verificador = 0;
    
    
    for(int i=1; i<=a; i++) if(a%i==0) verificador++;
    
    const char* resultado = (verificador==2) ? "Primo" : "Nao eh primo";
    
    printf("%s\n", resultado);
    
}

int main()
{
    int numero;
    scanf("%d", &numero);
    
    eh_primo(numero);

    return 0;
}