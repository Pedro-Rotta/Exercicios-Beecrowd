#include<stdio.h>
#define TF 32
int main()
{
  long long int bin1[TF], bin2[TF],binR[TF], num1, num2, i, carry =0, n;
  int soma =0;
  scanf("%lld", &num1);
  
  for(i=TF-1;i>= 0 && num1 > 0;i--)
  {
    bin1[i] = num1 % 2;
        num1 = num1 / 2;
  }
  for(; i>= 0/2;i--)
    bin1[i] = 0;
  scanf("%lld", &num2);
  for(i=TF-1;i>= 0 && num2 > 0;i--)
  {
    bin2[i] = num2 % 2;
        num2 = num2 / 2;
  }
  for(; i>= 0/2;i--)
    bin2[i] = 0;

  for(i=TF;i>=0;i--)
  {
    soma = bin1[i] + bin2[i];
      if(carry == 0)
      {
        if(soma == 0)
          binR[i] = 0;
        else if(soma==1)
          binR[i] = 1;
        else if(soma == 2)
        {
          binR[i] = 0;
        }
      }
  }
soma =0;
for(i=TF-1, n=1;i>=0;i--)
  {
    soma+= binR[i] * n; 
    n *=2;
  }
  printf("%d\n", soma);
  
  return 0;
}