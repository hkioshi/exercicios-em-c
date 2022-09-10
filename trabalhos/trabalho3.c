#include <stdio.h>



int item = 0;

// --------------------- |
// começo do exercicio 1 |
// --------------------- |



void lerVetor(int *vetor)
{
  int var;
  printf("Escreva um numero: ");
  scanf("%d",&var);
  *vetor = var;
}

void exibirVetor(int *vetor)
{
  printf("%d ", *vetor);
  
  //system("sleep 1");
}

void funcao1()
{
  
  while (item <= 0 || item < 9) 
  {
    int vetor[10], num, escolha;
    //system("clear");
    printf("+ ----------- + \n");
    printf("| Exercicio a | \n");
    printf("+ ----------- + \n\n");
     printf("\n1 - ler \n2 - exibir  \n3 Sair\nEscolha: ");
  
      double resultado,taxa, capital, tempo, juros;
      scanf("%d", &escolha);
      switch(escolha)
      {
        case 1:
          for(int i =0; i < 10 ; i++)
            {
              lerVetor(&vetor[i]);
            }
        break;
  
        case 2:
          for(int i = 0; i < 10 ; i++)
            {
              exibirVetor(&vetor[i]);
            }
            printf("\n");
            system("sleep 3");
        break;
        
        case 3: 
        exit(0);
        }
    
  }  
}

// ------------------ |
// fim do exercicio 1 |
// ------------------ |


// --------------------- |
// começo do exercicio 2 |
// --------------------- |


void lerVetor2(int *vetor)
{
  int var;
  printf("Escreva um numero: ");
  scanf("%d",&var);
  *vetor = var;
}

void calcularVetor(int *vetor, int *vetor3X)
{
  int var;
  *vetor3X = *vetor * 3;
  
}

void exibirVetor2(int *vetor)
{
  printf("%d ", *vetor);
  
}

void funcao2()
{
  int escolha = 0;
  while (escolha != 5) 
    {
      //system("clear");
      printf("+ ----------- + \n");
      printf("| Exercicio b | \n");
      printf("+ ----------- + \n");
      printf("\n1 - ler \n2 - Calcular  \n3 - exibir  \n4 Sair\nEscolha: ");
  
      int escolha, vetor[8], vetor3X[8];
      scanf("%d", &escolha);
      switch(escolha)
      {
        case 1:
          for(int i =0; i < 8 ; i++)
            {
              lerVetor2(&vetor[i]);
            }
        break;
        
        case 2:
         for(int i =0; i < 8 ; i++)
            {
              calcularVetor(&vetor[i], &vetor3X[i]);
            }
          
        break;
  
        case 3:
           for(int i = 0; i < 8 ; i++)
            {
              exibirVetor2(&vetor3X[i]);
            }
            printf("\n");
            system("sleep 3");
        break;
        
        case 4: 
        exit(0);
  
        escolha = 0;
      }
      
    }  
}

// ------------------ |
// fim do exercicio 2 |
// ------------------ |

// --------------------- |
// começo do exercicio 3 |
// --------------------- |

void lerVetor3(int *vetor, int *vetor2)
{
  int var, var2;
  printf("Escreva um numero: ");
  scanf("%d",&var);
  printf("Escreva outro numero: ");
  scanf("%d",&var2);
  *vetor = var;
  *vetor2 = var2;
}

void calcularVetor2(int *vetor, int *vetor3X, int *resultado)
{
  int var;
  *resultado = *vetor - *vetor3X;
  
}

void exibirVetor3(int *vetor)
{
  printf("%d ", *vetor);
  
}


void funcao3()
{
  int escolha = 0;
  while (escolha != 5) 
    {
      //system("clear");
      printf("+ ----------- + \n");
      printf("| Exercicio c | \n");
      printf("+ ----------- + \n");
      printf("\n1 - ler \n2 - Calcular  \n3 - exibir  \n4 Sair\nEscolha: ");
  
      int escolha, vetor[3], outroVetor[3], vetorResultado[3];
      scanf("%d", &escolha);
      switch(escolha)
      {
        case 1:
          for(int i =0; i < 3 ; i++)
            {
              lerVetor3(&vetor[i], &outroVetor[i]);
            }
        break;
        
        case 2:
         for(int i =0; i < 3 ; i++)
            {
              calcularVetor2(&vetor[i], &outroVetor[i], &vetorResultado[i]);
            }
          
        break;
  
        case 3:
           for(int i = 0; i < 3 ; i++)
            {
              exibirVetor3(&vetorResultado[i]);
            }
            printf("\n");
            system("sleep 3");
        break;
        
        case 4: 
        exit(0);
  
        escolha = 0;
      }
      
    }  
}

// ------------------ |
// fim do exercicio 3 |
// ------------------ |

// --------------------- |
// começo do exercicio 4 |
// --------------------- |


void lerVetor4(int *vetor)
{
  int var;
  printf("Escreva um numero: ");
  scanf("%d",&var);
  *vetor = var;
}

void calcularVetor3(int *vetor, int *vetor3X)
{
  int var;
  *vetor3X = *vetor * *vetor;
  
}

void exibirVetor4(int *vetor, int *vetor3X)
{
  printf("%d %d \n", *vetor,*vetor3X);
  
}

void funcao4()
{
  int escolha = 0;
  while (escolha != 5) 
    {
      //system("clear");
      printf("+ ----------- + \n");
      printf("| Exercicio d | \n");
      printf("+ ----------- + \n");
      printf("\n1 - ler \n2 - Calcular  \n3 - exibir  \n4 Sair\nEscolha: ");
  
      int escolha, vetor[5], vetor3X[5];
      scanf("%d", &escolha);
      switch(escolha)
      {
        case 1:
          for(int i =0; i < 5 ; i++)
            {
              lerVetor4(&vetor[i]);
            }
        break;
        
        case 2:
         for(int i =0; i < 5 ; i++)
            {
              calcularVetor3(&vetor[i], &vetor3X[i]);
            }
          
        break;
  
        case 3:
           for(int i = 0; i < 5 ; i++)
            {
              exibirVetor4(&vetor[i], &vetor3X[i]);
            }
            printf("\n");
            system("sleep 3");
        break;
        
        case 4: 
        exit(0);
  
        escolha = 0;
      }
      
    }  
}

// ------------------ |
// fim do exercicio 4 |
// ------------------ |


// --------------------- |
// começo do exercicio 5 |
// --------------------- |

void funcaoLer(int *a )
{
  int valor;
    printf("escreva um numero: ");
    scanf("%d",&valor);
    *a = valor;
}

void funcaoCalc(int *a, int *b )
{
  *b = *a;
}

void exibirVetor5(int *vetor)
{
  printf("%d \n", *vetor);
  
}

void funcao5()
{
  int escolha = 0;
  while (escolha != 10) 
    {
      //system("clear");
      printf("+ ----------- + \n");
      printf("| Exercicio e | \n");
      printf("+ ----------- + \n");
      printf("\n1 - ler \n2 - Calcular  \n3 - exibir  \n4 Sair\nEscolha: ");
  
      int escolha, vetor[5], vetor2[5],vetorGrand[10], global = 0;
      scanf("%d", &escolha);
      switch(escolha)
      {
        case 1:
          for(int i = 0 ; i < 5; i++)
            {
              funcaoLer(&vetor[i]);
            }
          for(int i = 0 ; i < 5; i++)
            {
              funcaoLer(&vetor2[i]);
            }
          
        break;
        
        case 2:
          for(int i = 0 ; i < 5 ; i++)
            {
            funcaoCalc(&vetor[i], &vetorGrand[global]);
              global++;
            }
          for(int i = 0 ; i < 5 ; i++)
            {
              funcaoCalc(&vetor2[i], &vetorGrand[global]);
              global++;
            }

        break;
  
        case 3:
           for(int i = 0; i < 10 ; i++)
            {
              exibirVetor5( &vetorGrand[i]);
            }
            printf("\n");
            system("sleep 3");
        break;
        
        case 4: 
        exit(0);
  
        escolha = 0;
      }
      
    }  
}

// ------------------ |
// fim do exercicio 5 |
// ------------------ |


// --------------------- |
// começo do exercicio 6 |
// --------------------- |


void funcaoLer2(int *a )
{
  int valor;
    printf("escreva um numero: ");
    scanf("%d",&valor);
    *a = valor;
}

void funcaoCalc2(int *a, int *b )
{
  *b = *a;
}

void exibirVetor6(int *vetor)
{
  printf("%d \n", *vetor);
  
}

void funcao6()
{
  int escolha = 0;
  while (escolha != 10) 
    {
      //system("clear");
      printf("+ ----------- + \n");
      printf("| Exercicio f | \n");
      printf("+ ----------- + \n");
      printf("\n1 - ler \n2 - Calcular  \n3 - exibir  \n4 Sair\nEscolha: ");
  
      int escolha, vetor[2], vetor2[3],vetorGrand[5], global = 0;
      scanf("%d", &escolha);
      switch(escolha)
      {
        case 1:
          for(int i = 0 ; i < 2; i++)
            {
              funcaoLer2(&vetor[i]);
            }
          for(int i = 0 ; i < 3; i++)
            {
              funcaoLer2(&vetor2[i]);
            }
          
        break;
        
        case 2:
          for(int i = 0 ; i < 2 ; i++)
            {
            funcaoCalc2(&vetor[i], &vetorGrand[global]);
              global++;
            }
          for(int i = 0 ; i < 3 ; i++)
            {
              funcaoCalc2(&vetor2[i], &vetorGrand[global]);
              global++;
            }

        break;
  
        case 3:
           for(int i = 0; i < 5 ; i++)
            {
              exibirVetor6( &vetorGrand[i]);
            }
            printf("\n");
            system("sleep 3");
        break;
        
        case 4: 
        exit(0);
  
        escolha = 0;
      }
      
    }  
}





// ------------------ |
// fim do exercicio 6 |
// ------------------ |

// --------------------- |
// começo do exercicio 7 |
// --------------------- |

void lerFuncao2(int *a)
{
  int valor;
  printf("escreva um numero: ");
  scanf("%d",&valor);
  *a = valor;
}

void calcfuncao2(int *a,int *b)
{
  *b = *a;
}

void exibirVetor7(int *vetor, int *vetor3X)
{
  printf("%d %d \n", *vetor,*vetor3X);
  
}

void funcao7()
{
  int escolha = 0;
  while (escolha != 5) 
    {
      //system("clear");
      printf("+ ----------- + \n");
      printf("| Exercicio g | \n");
      printf("+ ----------- + \n");
      printf("\n1 - ler \n2 - Calcular  \n3 - exibir  \n4 Sair\nEscolha: ");
  
      int escolha, vetor[3], vetor2[3], m = 2,n = 0 ;
      scanf("%d", &escolha);
      switch(escolha)
      {
        case 1:
          for(int i = 0 ; i < 3 ; i++)
            lerFuncao2(&vetor[i]);
            
        break;
        
        case 2:
          while(m >= 0)
            {
              calcfuncao2(&vetor[m], &vetor2[n]);
              
              
              n++;
              m--;
             
            }
        break;
  
        case 3:
          for(int i = 0; i < 3 ; i++)
            {
             exibirVetor7(&vetor[i], &vetor2[i]);
            }
          
          printf("\n");
          system("sleep 3");
        break;
        
        case 4: 
        exit(0);
  
        escolha = 0;
      }
      
    }  
}


// ------------------ |
// fim do exercicio 7 |
// ------------------ |

int main(void) {
  while (item <= 0 || item < 9) 
  {
    system("clear");
    printf("+ ---------- + \n");
    printf("| Trabalho 3 | \n");
    printf("+ ---------- + \n\n");
    printf("Digite o numero da questao [1|2|3|4|5|6|7]: ");
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
        funcao4();
      break;

      case 5:
        funcao5();
      break;

      case 6:
        funcao6();
      break;

      case 7:
        funcao7();
      break;
      
      case 8: 
      exit(0);
    }
  }
  return 0;
}