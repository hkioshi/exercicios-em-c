#include <stdio.h>
#define pi 3.14;

//exercicio 1

void exibir(double area)
{
  printf("a area do circulo é %.2lf\n", area);
  system("sleep 5");
  
}

double calcularArea(double raio)
{
 double area = (raio * raio) * pi;
  return area;
}

double calcularRaio(double comp)
{
  double raio, doisPi;
  doisPi = 2 * pi; 
  raio = comp / doisPi;
  return raio;
}

double ler(void)
{
  double comprimento;
  printf("digite o comprimento: ");
  scanf("%lf",&comprimento);
  return comprimento;
}

void funcao1(void)
{
  int escolha;
  while (escolha != 5) 
    {
      //system("clear");
      printf("+ -------- + \n");
      printf("| tarefa 1 | \n");
      printf("+ -------- + \n");
      printf("\n1 - ler \n2 - Calcular  \n3 - exibir  \n4 Sair\nEscolha: ");
  
      double resultado,comprimento, area, raio;
      scanf("%d", &escolha);
      switch(escolha)
      {
        case 1:
          comprimento = ler();
        break;
        
        case 2:
          raio = calcularRaio(comprimento);
          //printf("\n%lf",raio);
          area = calcularArea(raio);
          //printf("\n%lf",area);
          
        break;
  
        case 3:
          exibir(area);
        break;
        
        case 4: 
        exit(0);
  
        escolha = 0;
      }
      
    }  
}

//fim do exercicio 1

//exercicio 2

void ler2(double *pontTaxa, double *pontCapital, double *pontTempo)
{
  double taxa, capital, tempo;
  printf("digite qual é a taxa (em porcento): ");
  scanf("%lf",&taxa);
  
  printf("digite o capital: ");
  scanf("%lf",&capital);
  
  printf("digite o tempo(em anos): ");
  scanf("%lf",&tempo);

  *pontTaxa = taxa;
  *pontCapital = capital;
  *pontTempo = tempo;
  
}


double calcularJuros (double taxa,double capital,double tempo)
{
  double juros = taxa * capital * tempo;
  return juros;
}

void exibirJuros(double juros)
{
  printf("O total com Juros é %.2lf\n", juros);
  system("sleep 5");
  
}

void funcao2(void)
{
  int escolha;
  while (escolha != 5) 
    {
      //system("clear");
      printf("+ -------- + \n");
      printf("| tarefa 2 | \n");
      printf("+ -------- + \n");
      printf("\n1 - ler \n2 - Calcular  \n3 - exibir  \n4 Sair\nEscolha: ");
  
      double resultado,taxa, capital, tempo, juros;
      scanf("%d", &escolha);
      switch(escolha)
      {
        case 1:
          ler2(&taxa, &capital, &tempo);
          
          
        break;
        
        case 2:
          
          juros = calcularJuros(taxa,capital,tempo);
          //printf("\n%lf",area);
          
        break;
  
        case 3:
          exibirJuros(juros);
        break;
        
        case 4: 
        exit(0);
  
        escolha = 0;
      }
      
    }  
}


//exercicio 3

void ler3(double *pontBase, double *pontAltura)
{
  double base, altura;
  printf("digite a base: ");
  scanf("%lf",&base);
  
  printf("digite a altura: ");
  scanf("%lf",&altura);

  *pontBase = base;
  *pontAltura = altura;
}

double lerBase(void)
{
  double base;
  printf("digite a base: ");
  scanf("%lf",&base);
  return base;
}

double lerAltura(void)
{
  double altura;
  printf("digite a base: ");
  scanf("%lf",&altura);
  return altura;
}

double calcularAreaDoTriangulo(double base, double altura)
{
  double resultado = (base * altura)/2;
  return resultado;
}

double exibirTriangulo(double area)
{
  printf("a area do triangulo é %.2lf\n", area);
  system("sleep 5");
}

void funcao3(void)
{
  int escolha;
  while (escolha != 5) 
    {
      //system("clear");
      printf("+ -------- + \n");
      printf("| tarefa 3 | \n");
      printf("+ -------- + \n");
      printf("\n1 - ler \n2 - Calcular  \n3 - exibir  \n4 Sair\nEscolha: ");
  
      double resultado,base, area, altura;
      scanf("%d", &escolha);
      switch(escolha)
      {
        case 1:
         ler3(&base, &altura);
          
        break;
        
        case 2:
          
          area = calcularAreaDoTriangulo(base,altura);
          //printf("\n%lf",area);
          
        break;
  
        case 3:
          exibirTriangulo(area);
        break;
        
        case 4: 
        exit(0);
  
        escolha = 0;
      }
      
    }  
}

//fim do exercicio 3

int main(void) {
  
  int item = 0 , escolha = 0;
  char nome[30];
  while (item != 5) 
  {
    system("clear");
    printf("+ ---------- + \n");
    printf("| Trabalho 2 | \n");
    printf("+ ---------- + \n");
    printf("\n1 - Tarefa 1 \n2 - Tarefa 2 \n3 - tarefa 3 \n4 Sair\nTarefa: ");
    scanf("%d", &item);
    switch(item)
    {
      case 1:
        funcao1();
      break;
      
      case 2:
        funcao2();
      break;

      case 3:
        funcao3();
      break;
      
      case 4: 
      exit(0);

      
    }
    
  }  
  
  return 0;
}

 