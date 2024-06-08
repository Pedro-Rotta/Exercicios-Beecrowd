#include <stdio.h>
#include <string.h>
#define TF 100

int main() {
    int quantl, i, j, lenpalavra, maiorpalavra, k, c, start = 0;
    char vetpalavra[TF][50], palaux[50];

    scanf("%d", &quantl);
    while ((i = getchar()) != '\n' && i != EOF);

    for (i = 0; i < quantl; i++) {
        fgets(vetpalavra[i], sizeof(vetpalavra[i]), stdin);
        
        while (vetpalavra[i][start] == ' ' || vetpalavra[i][start] == '\t') {
            start++;
        }
        if (start > 0) {
            memmove(vetpalavra[i], vetpalavra[i] + start, strlen(vetpalavra[i]) - start + 1);
        }

        lenpalavra = strlen(vetpalavra[i]);
        if (i == 0) {
            maiorpalavra = lenpalavra;
        }
        if (lenpalavra > maiorpalavra) {
            maiorpalavra = lenpalavra;
        }
        
        for (j = 0; j < lenpalavra;) {
            if (vetpalavra[i][j] == ' ' && vetpalavra[i][j + 1] == ' ') {
                for (k = j; k < lenpalavra; k++) {
                    vetpalavra[i][k] = vetpalavra[i][k + 1];
                }
                lenpalavra--;
            } else {
                j++;
            }
        }
    }

    for (i = 0; i < quantl; i++) {
        strcpy(palaux, vetpalavra[i]);
        memset(vetpalavra[i], '\0', sizeof(vetpalavra[i]));
        for (c = 0; c < maiorpalavra - strlen(palaux); c++) {
            vetpalavra[i][c] = ' ';
        }
        strcat(vetpalavra[i], palaux);
        memset(palaux, '\0', sizeof(palaux));
    }
    for (i = 0; i < quantl; i++) {
        printf("%s\n", vetpalavra[i]);
    }
    
    return 0;
}