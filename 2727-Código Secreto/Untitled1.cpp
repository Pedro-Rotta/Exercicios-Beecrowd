#include <stdio.h>

int main ()
{

    int n, i;
    char codigo[150], cont1, cont2, letra;

    while (scanf("%d", &n) != EOF)
    {

        scanf(" %[^\n]", codigo);

        cont2 = 0;
        for (i = 0; codigo[i]; ++i)
            if (codigo[i] == ' ')
                ++cont2;

        cont1 = 96;
        for (i = 0; codigo[i]; ++i)
            if (codigo[i] == ' ')
                break;
            else
                ++cont1;

        if (!(cont2 > 0))
            printf("%c\n", cont1);
        else
        {
            if (cont2 == 1)
                letra = 3;
            else if (cont2 == 2)
                letra = 6;
            else if (cont2 == 3)
                letra = 9;
            else if (cont2 == 4)
                letra = 12;
            else if (cont2 == 5)
                letra = 15;
            else if (cont2 == 6)
                letra = 18;
            else if (cont2 == 7)
                letra = 21;
            else if (cont2 == 8)
                letra = 24;

            printf("%c\n", letra + cont1);

        }

    }
            
}