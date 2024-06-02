#include <stdio.h>

int main(){

    int n, i, a, y, x, cont = 1, total = 0, ajd;
    float media, maior, menor;

    scanf("%d %d", &n, &i);

    while (n > 0 && i > 0){

        int vettemp[n];

        for (a = 0; a < n; a++)
            scanf("%d", &vettemp[a]);

        maior = -201;
        menor = 201;
        ajd = 0;
        x = i;

        while (x <= n){

            total = 0;
            y = ajd;

            while (y < x){
                total += vettemp[y];
                y++;
            }

            media = total / i;

            if (media > maior)
                maior = media;

            if (media < menor)
                menor = media;

            x++;
            ajd++;
        }

        printf("Teste %d\n", cont);
        printf("%.0f %.0f\n", menor, maior);
        printf("\n");

        cont++;

        scanf("%d %d", &n, &i);
    }

    return 0;
}
