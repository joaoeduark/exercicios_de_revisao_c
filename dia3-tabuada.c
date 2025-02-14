#include <stdio.h>

int main()
{
    int numero;
    
    scanf("%d", &numero);
    
    for(int i =1; i<=10; i++){ //imrprime tabuada de um numero
        
        printf("%dX%d=%d\n", numero, i, (numero*i));
    }

    return 0;
}