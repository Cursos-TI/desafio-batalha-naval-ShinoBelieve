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
    int barco1[10][10] = {{0, 3}, {1, 3}, {2, 3},{3, 3},{4, 3},{2, 1},{2, 2}, {2, 3},{2, 4},{2,5}}; //Habilidade Cruz
    for(int i = 0; i < 10; i++){
        tabuleiro[barco1[i][0]][barco1[i][1]] = 10;
    }
    int barco2[14][14] = {{3, 7}, {4, 6}, {4, 7},{4, 8},{5, 5},{5, 6},{5, 7},{5, 8},{5, 9},{6, 6},{6, 7},{6, 8},{7, 7}}; //Habilidade Octaedro
    for(int i = 0; i < 14; i++){
        tabuleiro[barco2[i][0]][barco2[i][1]] = 10;
    }
   
    int barco4[10][10] = {{5, 2}, {6, 1}, {6, 2}, {6, 3},{7, 0},{7, 1},{7, 2}, {7, 3}, {7, 4}}; //Habilidade Cone
    for(int i = 0; i < 10; i++){
        tabuleiro[barco4[i][0]][barco4[i][1]] = 10;
    }
    
//Imprimindo o tabuleiro com o barco
    printf("   0  1  2  3  4  5  6  7  8  9\n");
    for(int i = 0; i < Linhas; i++){
        printf("%c ", linha[i]);
        for (int j = 0; j < Colunas; j++){
            if(tabuleiro[i][j] == 0){
                printf(" 0 ");
            }else{
                printf(" 5 ");
            }
            
        }
    printf("\n");
    }

    }
  }


        
    
    
    