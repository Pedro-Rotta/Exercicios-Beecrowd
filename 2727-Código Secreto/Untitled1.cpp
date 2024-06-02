#include <stdio.h>
int main()
{
  int ValorDado, Chute, tentativa = 0;
  printf("Digite o valor do dado, de 1 a 12\n");
  scanf("%d", &ValorDado);
  if(!(ValorDado >= 1 && ValorDado <= 12))
  {
    printf("Valor inválido\n");
    printf("Digite o Valor do dado, de 1 a 12\n");
    scanf("%d", &ValorDado);
  }
  printf("Digite o primeiro chute diferente do Valor do Dado\n");
  scanf("%d", &Chute);
  while(Chute != ValorDado){
    if(!(ValorDado >= 1 && ValorDado <= 12))
      {
        printf("Valor inválido\n");
        printf("Digite o Valor do dado\n");
        scanf("%d", &ValorDado);
      }
    if(!(Chute >= 1 && Chute <= 12))
      {
        printf("Valor inválido\n");
        printf("Digite o Chute\n");
        scanf("%d", &Chute);
      }
    tentativa++;
      if(Chute > ValorDado){
        printf("Chute alto\n");
        ValorDado = (ValorDado - 6) /2;
        scanf("%d", &Chute);
      }
      else if(Chute < ValorDado){
        printf("Chute Baixo\n");
    ValorDado = (ValorDado - 5)*2;
      printf("Digite o Chute\n");
      scanf("%d", &Chute);
      }
      while(ValorDado < 1)
        {
        ValorDado = ValorDado + 8;
        }
      while(ValorDado > 12)
        {
        ValorDado = ValorDado - 8;
        }
  }
    printf("Parabens, voce acertou\n");
    printf("você tentou %d vezes até acertar\n", tentativa);
  	return 0;
}
