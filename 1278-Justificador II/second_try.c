#include <stdio.h>
#include <string.h>
#define TF 100

int main(){

    int quantl, i, j, lenpalavra, maiorpalavra, k, c;
    char vetpalavra[TF][50], palaux[50];
    scanf("%d", &quantl);
    while ((i = getchar()) != '\n' && i != EOF);
    for(i=0;i<quantl;i++){
        gets(vetpalavra[i]);
        lenpalavra = strlen(vetpalavra[i]);
        if(i==0){
            maiorpalavra = lenpalavra;
        }
        if(lenpalavra > maiorpalavra){
            maiorpalavra = lenpalavra;
        }
        for(j=0;j<lenpalavra;){
            if(vetpalavra[i][j] == ' ' && vetpalavra[i][j+1] == ' '){
                for(k=j;k<lenpalavra;k++){
                    vetpalavra[i][k] = vetpalavra[i][k+1];
                }
            }
            else{
                j++;
            }
        }
    
    }

    for(i=0;vetpalavra[0][i] == ' ';){
        lenpalavra = strlen(vetpalavra[i]);
        for (j = 0; vetpalavra[0][i] != '\0'; j++, i++) {
    vetpalavra[0][j] = vetpalavra[0][i];
}
    for(i=0;i<maiorpalavra;i++){
        strcpy(palaux, vetpalavra[i]);
        for(c=0;c<maiorpalavra-strlen(palaux);c++){
            vetpalavra[i][c] = ' ';
    }
    strcat(vetpalavra[i], palaux);
    }
    }
    for(i=0;i<quantl;i++){
        printf("%s\n", vetpalavra[i]);
            }
    return 0;
}