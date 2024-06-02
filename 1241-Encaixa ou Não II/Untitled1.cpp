#include <stdio.h>
#include <string.h>
#define TF 1001

int main() 
{
    int rep, i, j, retorno;
    char valor1[TF], valor2[TF], digitos1, digitos2;
    char valor1Str[TF] = "";
    scanf("%d", &rep);

    for(i = 0; i < rep; i++)
    {
        scanf(" %s%s", &valor1, &valor2);
        
        digitos1 = strlen(valor1);
        digitos2 = strlen(valor2);
        if(digitos2 <= digitos1)
        {
            strcpy(valor1, valor1 + digitos1 - digitos2);
            retorno = (strcmp(valor1,valor2));
            if(retorno == 0)
                printf("encaixa\n");
            else1
                printf("nao encaixa\n");
        }
        else
            printf("nao encaixa\n");
    }
    scanf(" %s%s", &valor1, &valor2);
    return 0;
}

