#include <stdio.h>

//tic tac toe prototype

#define tamanho 3

void exibe_tabuleiro(char a[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%c", a[i][j]);
            if (j < tamanho - 1) putchar('|');
        }
        putchar('\n');
        if (i < tamanho - 1) printf("-----\n");
    }
    
    putchar('\n');
}

void substituir(char variavel, char a[tamanho][tamanho], int count) {
    int pos = variavel - '1';

    if (pos < 0 || pos >= 9) return;

    int i = pos / tamanho;
    int j = pos % tamanho;

    if (a[i][j] == 'X' || a[i][j] == 'O') {
        printf("Posicao ocupada\n");
        return;
    }

    a[i][j] = (count % 2 == 0) ? 'X' : 'O';
}

int vitoria(char a[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        if (a[i][0] == a[i][1] && a[i][1] == a[i][2]) {
            return (a[i][0] == 'X') ? 1 : 2;
        }
    }

    for (int j = 0; j < tamanho; j++) {
        if (a[0][j] == a[1][j] && a[1][j] == a[2][j]) {
            return (a[0][j] == 'X') ? 1 : 2;
        }
    }

    if (a[0][0] == a[1][1] && a[1][1] == a[2][2]) {
        return (a[0][0] == 'X') ? 1 : 2;
    }
    if (a[0][2] == a[1][1] && a[1][1] == a[2][0]) {
        return (a[0][2] == 'X') ? 1 : 2;
    }

    return 0;
}

int main() {
    char jogo_da_velha[tamanho][tamanho] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    char variavel;

    for (int count = 0; count < 9; count++) {
        exibe_tabuleiro(jogo_da_velha);
        printf("Jogador %c, digite o numero da posicao: ", (count % 2 == 0) ? 'X' : 'O');
        
        getchar();
        scanf("%c", &variavel);
        getchar();
        substituir(variavel, jogo_da_velha, count);

        int vencedor = vitoria(jogo_da_velha);
        if (vencedor == 1) {
            exibe_tabuleiro(jogo_da_velha);
            printf("Jogador X venceu.\n");
            return 0;
            
        }
        else if (vencedor == 2) {
            exibe_tabuleiro(jogo_da_velha);
            printf("Jogador O venceu.\n");
            return 0;
        }
    }

    exibe_tabuleiro(jogo_da_velha);
    printf("Empate.\n");

    return 0;
}
