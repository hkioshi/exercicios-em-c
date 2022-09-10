#include <stdio.h>
#include <stdlib.h>
char devedor[5][30];

void lerDivida(double *a, double *b, int i )
{
  
  printf("escreva o nome do devedor: ");

  gets(devedor[i]);
  
  printf("Digite o valor: ");
  scanf("%lf",&*a);
  
  printf("Digite o tempo de atraso em meses: ");
  scanf("%lf",&*b);
  printf("\n");
  
}

void calcularDivida(double *a, double *b, double *c, double *d, int i)
{
  
  
  *c = (*a * (1 + 0.02)) * (1 + (*b * 0.03));
  
  *d = *d + *c;
  if(i == 5)
  {
    *d = *d / 5;
  }
}

void exibirDivida(double *a, double *b, int i)
{
  
    printf("ficha %d: \n", i + 1);
    puts(devedor[i]);
  
    printf("valor a pagar: %.2lf \n\n", *a);
    system("sleep 1");
    if(i == 4)
    {
      printf("A media é: %.2lf \n\n", *b);
      system("sleep 3");
    }
}

void menu(void) {
  int flag = 0, escolha; 
  double valorPagar[5], valPrincipal[5], qtdeDias[5], media = 0;
  do 
  {
    system("clear");
    printf("+ ---------- + \n");
    printf("| trabalho 4 | \n");
    printf("+ ---------- + \n\n");
    printf("lista devedores\n");
    printf("Escolha o item: \n1 - ler\n2 - calcular\n3 - exbir \n4 - sair\n");
    scanf("%d",&escolha);
    switch(escolha)
      {
        case 1:
          for(int i = 0; i < 5; i++)
          {
            lerDivida(&valPrincipal[i], &qtdeDias[i] , i);
          }
        break;
        case 2:
          for(int i = 0; i < 6; i++)
          {
            calcularDivida(&valPrincipal[i],&qtdeDias[i],&valorPagar[i], &media, i);
          }
        break;
        case 3:
          for(int i = 0; i < 5; i++)
          {
            exibirDivida(&valorPagar[i], &media , i);
          }
         
        break;
        case 4:
          flag = 1;
        break;
        default:
          flag = 1;
      }
  }while(flag == 0);
}

int main (void)
{
  menu();
  return 0;
}