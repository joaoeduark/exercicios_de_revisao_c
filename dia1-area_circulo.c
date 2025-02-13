#include <stdio.h>

#define Pi 3.14

int main()
{
    double raio = 0;
    scanf("%lf", &raio);
    
    double area_circulo = Pi*raio*raio;
    printf("a area do circulo eh %.2lf\n", area_circulo);
    
    return 0;
}