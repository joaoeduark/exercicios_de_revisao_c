#include <stdio.h>

int main()
{
    double a, b, c; // tres numeros  quaisquer
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    double maior = (a>b && a>c) ? a : ((b>a && b>c) ? b : c);
    
    printf("o maior numero eh %.2lf\n", maior);

    return 0;
}