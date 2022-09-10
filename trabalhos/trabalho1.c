#include <stdio.h>
#define pi 3.14;

int main(void) {
  char exercicio, sn;
  int flag = 0;

  float celcius, fahrenheit ; //exercicio 1
  float raio, altura, volume, comprimento, largura; //exercicio 2 e 5
  float vm, tempo, distancia, litro; //exercicio 3
  float prestacao, valor, taxa, tempo2; //exercicio 4
    
    printf(" + ---------- + \n");
    printf(" | Trabalho 1 | \n");
    printf(" + ---------- + \n\n");

    printf("Escreva o exercicio: [a / c / d / e / h]: ");
    scanf("%c",&exercicio);
    system("cls");

    switch(exercicio)
    {
      case 'a':
        printf(" + ----------- + \n");
        printf(" | exercicio 1 | \n");
        printf(" + ----------- + \n\n");
        printf("conversor C para F\n");
        printf("escreva uma temperatura em C: ");
        scanf("%f",&celcius);
        fahrenheit = (9 * celcius + 160) / 5;
        printf("A temperatura em F é: %.2f F\n", fahrenheit);
      break;

      case 'c':
        printf(" + ----------- + \n");
        printf(" | exercicio 2 | \n");
        printf(" + ----------- + \n\n");
        printf("calculadora de volume de lata\n");
        printf("escreva o raio: ");
        scanf("%f",&raio);
        printf("escreva a altura: ");
        scanf("%f",&altura);
        volume = (raio * raio) * altura * pi;
        printf("O volume é: %.2f L", volume);
      break;

      case 'd':
        printf(" + ----------- + \n");
        printf(" | exercicio 3 | \n");
        printf(" + ----------- + \n\n");
        printf("calculadora de gasto de combustivel\n");
        printf("escreva a Velocidade media: ");
        scanf("%f",&vm);
        printf("escreva o tempo da viagem: ");
        scanf("%f",&tempo);
        distancia = vm * tempo;
        litro = distancia * 12;
        printf("Foi gasto: %.2f L", litro);
      break;

      case 'e':
        printf(" + ----------- + \n");
        printf(" | exercicio 4 | \n");
        printf(" + ----------- + \n\n");
        printf("Calculadora de taxa atrasada\n");
        printf("escreva o valor: ");
        scanf("%f",&valor);
        printf("escreva a taxa: ");
        scanf("%f",&taxa);
        printf("escreva o tempo de atraso: ");
        scanf("%f",&tempo2);
        
        prestacao = valor +(valor * taxa/100) * tempo2;
        printf("Sua prestação agora tem o valor de: R$ %.2f", prestacao);
      break;

      case 'h':
        printf(" + ----------- + \n");
        printf(" | exercicio 5 | \n");
        printf(" + ----------- + \n\n");
        printf("Calculadora de volume de paralelepidedo\n");
        printf("escreva o comprimento: ");
        scanf("%f",&comprimento);
        printf("escreva o largura: ");
        scanf("%f",&largura);
        printf("escreva a altura: ");
        scanf("%f",&altura);
        volume = comprimento * altura * largura;
        printf("O volume é: %.2f L", volume);
      break;
    }
  return 0;
}