#include <stdio.h>

typedef long long ll;

int main()
{
    ll matriz[3][3];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%lld", &matriz[i][j]);
        }
    }
    
    ll soma = 0;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            soma+= matriz[i][j];
        }
    }
    
    printf("a soma eh %lld\n", soma);
    
    return 0;
}

