#include <stdio.h>

int main()
{
    double num1, num2;
    char operador;
    scanf("%lf %c %lf", &num1, &operador, &num2);
    
    switch(operador){
        
        case '+':
            double soma = num1 + num2;
            printf("%.2lf", soma);
            break;
        
        case '-':
            double subtracao = num1 - num2;
            printf("%.2lf", subtracao);
            break;
        
        case '*':
        case 'x':
            double multiplicacao = num1 * num2;
            printf("%.2lf", multiplicacao);
            break;
        
        case '/':
            if(num2!=0){
                double divisao = num1 / num2;
                printf("%.2lf", divisao);
                break;
            }
            else{
                printf("\n");
                break;
            }
        
        default:
          printf("Operador invalido!\n");
    }

    return 0;
}