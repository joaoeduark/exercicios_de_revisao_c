#include <stdio.h>
#include <stdlib.h>

typedef double db; 
typedef long long ll;

void inverte_valores(db *array, ll a){ //inverte valores de vetor
    
    for(int i=0; i<a/2; i++){
        db temp = array[i];
        array[i] = array[a-1-i];
        array[a-1-i] = temp; 
    }
}

int main()
{
    //teste de ponteiros e alocamento de memoria
    
    ll tamanho = 0;
    
    scanf("%lld", &tamanho);
    db *array = (db *)malloc(sizeof(db) * tamanho);
    
    for(int i =0; i<tamanho; i++) scanf("%lf", &array[i]);
    
    inverte_valores(array, tamanho);
    
    for(int i =0; i<tamanho; i++) printf("%.2lf ", array[i]);
    
    free(array);
    
    return 0;
}