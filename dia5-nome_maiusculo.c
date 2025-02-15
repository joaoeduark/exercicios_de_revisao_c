#include <stdio.h>
#include <string.h>

// alternativa poderia ser usar biblioteca stype.h (isupper)

void maiuscula(char *a){
    
    for(int i = 0; i<strlen(a); i++){
        if(a[i]>=97 && a[i]<=122) a[i]= a[i]-32; 
    }
}

int main()
{
    // obter nome e exibi-lo em letra maiuscula
    
    char nome[101];
    
    // fgets(nome, sizeof(nome), stdin);
    
    scanf("%[^\n]", nome);
    
    maiuscula(nome);
    
    printf("%s", nome);
    
    return 0;
}

