#include<stdio.h>
#include<string.h>
int main()
{
    int quantidade_linhas, i, c, quantidade_caracter, j, maior, multiplicador;
    char string[100][50], restante[50];
    scanf("%d", &quantidade_linhas);
    while ((c = getchar()) != '\n' && c != EOF);
    //Lê strings
    while(quantidade_linhas>0){
        for(i=0; i<quantidade_linhas;i++){
            gets(string[i]);
            if(i==0){
                maior = strlen(string[i]);
            }
            else if(maior < strlen(string[i])){
                    maior = strlen(string[i]);
                }
        }
//******************************************
        //Remove espaços do começo
        for(c=0;c<quantidade_linhas;c++){
                while(string[c][0] == ' '){
                    for(i=0;i<strlen(string[c])-1;i++){
                        string[c][i] = string[c][i+1];
                        quantidade_caracter = strlen(string[c]);
                    }
                    string[c][quantidade_caracter-1] = '\0';
                }
        }
//***********************************************
        //Remove os espaços do meio
        for(i=0;i<strlen(string[i]);i++){
            for(c=0;c<strlen(string[i]);){
                if(string[i][c] == ' ' && string[i][c+1] == ' '){
                    for(j=c+1;j<strlen(string[i]);j++){
                        string[i][j] = string[i][j+1];
                        quantidade_caracter = strlen(string[i]);
                    }
                    string[i][quantidade_caracter] = '\0';
                }
                else
                    c++;
            }
        }
//******************************************
        //Espaçamento necessário para o print
        //Print
        for(i=0;i<quantidade_linhas;i++){
            if(strlen(string[i]) < maior){
                restante[0] = '\0';
                multiplicador = maior-strlen(string[i]);
                for (j = 0; j < multiplicador; j++) {
                    restante[j] = ' ';
        }
                strcat(restante, string[i]);
                printf("%s\n", string[i]);
            }
            else{
                printf("%s\n", string[i]);
            }
        }
//******************************************
        //Sai lido
        scanf("%d", &quantidade_linhas);
        while ((c = getchar()) != '\n' && c != EOF);
//****************************************************
    }
    return 0;
}