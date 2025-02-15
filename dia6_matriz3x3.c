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
    
    putchar('\n');
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%lld", matriz[i][j]);
            if(j<2) putchar(' ');
            if(j==2) putchar('\n');
        }
        
    }
    
    return 0;
}

