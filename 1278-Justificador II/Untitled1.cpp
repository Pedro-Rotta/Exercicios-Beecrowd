#include <stdio.h>
#include <string.h>

int main(){
    
    int n, i, j, l, k, maiorpalavra = 0, espacos, pos, spc, TL, TFL, termino;

    scanf("%d", &n);

    while (n > 0){
        char palavra[n][51];
        maiorpalavra = 0;
        TFL = 0;
        for (i=0; i<n; i++){
			
            fflush(stdin);
            printf("digite a palavra\n");
            gets(palavra[i]);
            TFL++;
        }

        for (l = 0; l < TFL; l++){
            TL = strlen(palavra[l]);

            for(j = 0;j != 0;j++){
                pos = 0;
                spc = 0;
                for (k = 0; k < TL; k++){
                    
                    if (palavra[l][k] == ' ')
                        spc++;
                    
                    else
                        spc = 0;

                    if (spc == 2){
                        pos = k;
                        k = TL;
                    }
                }
                
                if (pos == 0){
                    if (palavra[l][0] == ' ')
                        for (i = 0; i < TL; i++)
                            palavra[l][i] = palavra[l][i + 1];
                    
                }
                
                else{
                    for (i = pos; i < TL; i++)
                        palavra[l][i] = palavra[l][i + 1];
                }
            }
        }

        for (l = 0; l < TFL; l++) {
            TL = strlen(palavra[l]);

            if (palavra[l][TL - 1] == ' ')
                palavra[l][TL - 1] = '\0';
        }

        maiorpalavra = 0;
        for (l = 0; l < TFL; l++) {
            TL = strlen(palavra[l]);
            
            if (TL > maiorpalavra) {
                maiorpalavra = TL;
            }
        }
        
        for (i=0; i<n; i++){
            
            espacos = maiorpalavra - strlen(palavra[i]);

            for(j=0; j<espacos; j++)
                printf(" ");

            printf("%s\n", palavra[i]);
        }
		if(i == n)
        	scanf("%d", &n);

        if(n > 0)
            printf("\n");
    }

    return 0;
}
