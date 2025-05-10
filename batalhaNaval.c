#include    <stdio.h>

#define Linhas 10
#define Colunas 10

int main(){
    int tabuleiro [Linhas][Colunas];
    char linha [10] = {'A','B','C','D','E','F','G','H','I','J'};

    for( int i = 0; i < Linhas; i++){
        for (int j = 0; j < Colunas; j++){
            tabuleiro[i][j] = 0;
        }
    }
//2. Imprimindo o tabuleiro
    printf("  0  1  2  3  4  5  6  7  8  9\n");
    for(int i = 0; i < Linhas; i++){
        printf("%c ", linha[i]);
        for (int j = 0; j < Colunas; j++){
            if(tabuleiro[i][j] == 0){;
            
        }
    printf("\n");
    }
//Colocando um barco no tabuleiro
    int barco1[4][3] = {{0, 0}, {0, 1}, {0, 2}, {0, 3}}; //Barco 1, Horizontal
    for(int i = 0; i < 4; i++){
        tabuleiro[barco1[i][0]][barco1[i][1]] = 1;
    }
    int barco2[3][3] = {{3, 6}, {4, 6}, {5, 6}}; //Barco 2, Vertical
    for(int i = 0; i < 3; i++){
        tabuleiro[barco2[i][0]][barco2[i][1]] = 1;
    }
    int barco3[3][3] = {{4, 0}, {5, 1}, {6, 2}}; //Barco 3, Diagonal
    for(int i = 0; i < 3; i++){
        tabuleiro[barco3[i][0]][barco3[i][1]] = 1;
    }
    int barco4[3][3] = {{9, 9}, {8, 8}, {7, 7}}; //Barco 4, Diagonal invertido
    for(int i = 0; i < 3; i++){
        tabuleiro[barco4[i][0]][barco4[i][1]] = 1;
    }
   
//Imprimindo o tabuleiro com o barco
    printf("  0  1  2  3  4  5  6  7  8  9\n");
    for(int i = 0; i < Linhas; i++){
        printf("%c ", linha[i]);
        for (int j = 0; j < Colunas; j++){
            if(tabuleiro[i][j] == 0){
                printf(" 0 ");
            }else{
                printf(" 3 ");
            }
            
        }
    printf("\n");
    }

    }
  }


        