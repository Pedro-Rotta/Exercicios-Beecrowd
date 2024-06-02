#include<stdio.h>
#define TF 12
int main()
{
    int l, c, cont;
    float Mat[TF][TF], soma, media, j;
    char letra;
    scanf(" %c", &letra);
    for(l=0;l<TF;l++)
        for(c=0;c<TF;c++)
            scanf("%f", &Mat[l][c]);
    soma = 0;
    j = TF-2;
    cont = 0;
    for(l=1;l<TF;l++)
    {
        for(c=TF-1;c>j;c--)
		{
            soma += Mat[l][c];
            cont++;
        }
        j--;
    }
    if(letra == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma/cont);
    scanf("%d", &l);
    return 0;
}	
