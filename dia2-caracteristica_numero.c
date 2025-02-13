#include <stdio.h>
#include <string.h>

int main()
{
    int numero;
    scanf("%d", &numero);
    
    char caracteristica[9];
    strcpy(caracteristica, (numero == 0) ? "zero" : ((numero > 0) ? "positivo" : "negativo"));
    
    /* Alternativa com ponteiro
       char *caracteristica;  
       caracteristica = (numero == 0) ? "zero" : ((numero > 0) ? "positivo" : "negativo"); 
    */
    
    printf("o valor eh %s\n", caracteristica);

    return 0;
}