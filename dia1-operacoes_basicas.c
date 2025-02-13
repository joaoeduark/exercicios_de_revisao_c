#include <stdio.h>

typedef double db;

int main()
{
    db num1, num2;
    scanf("%lf %lf", &num1, &num2);

    db soma = num1 + num2;
    db subtracao = num1 - num2;
    db multiplicacao = num1*num2;
    db divisao = num1/num2;

    printf("a soma dos numeros eh %.2lf\n", soma);
    printf("a subtracao dos numeros eh %.2lf\n", subtracao);
    printf("a multiplicacao dos numeros eh %.2lf\n", multiplicacao);
    printf("a divisao dos numeros eh %.2lf\n", divisao);

    return 0;
}
