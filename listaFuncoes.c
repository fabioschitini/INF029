#include <stdio.h>
//questao 1

int soma(int num1, int num2){
  return num1 + num2;
}

int main(void) {
  int num1, num2;
  
  printf("Numero 1: ");
  scanf("%i", &num1);

  printf("Numero 2: ");
  scanf("%i", &num2);

  printf("A soma eh: %i", soma(num1, num2));
  return 0;
}
//questao 2

#include <stdio.h>
float subtrai(float a, float b, float c, float resultado) {
  resultado = a - b - c;
  return resultado;
}
int main(void) {
  float a, b, c, resultado;
  printf("Coloque o valor do primeiro numero \n");
  scanf("%f", &a);
  printf(" \n Coloque o valor do segundo numeron \n");
  scanf("%f", &b);
  printf(" \nColoque o valor do terceiro numero \n");
  scanf("%f", &c);
  printf("O resultado é:%.2f", subtrai(a, b, c, resultado));
  return 0;
}

//questao 3

int fatorial(int num){
  int fatorial = 1; 

  if (num > 0){
    for (int i = 0; i < num; i++){
      fatorial *= num - i;
    }

    printf("Fatorial: %i", fatorial);
  }

  else
    printf("Erro!");
}

int main(){
  int num; 
  
  printf("Insira o numero: ");
  scanf("%i", &num);

  fatorial(num);
  return 0;
}

//questao 4
#include <stdio.h>
int ler3Numeros(int *result) {
  int a, b, c, resultado[3];
  printf("Coloque o valor do primeiro numero \n");
  scanf("%d", &a);
  printf(" \n Coloque o valor do segundo numeron \n");
  scanf("%d", &b);
  printf(" \nColoque o valor do terceiro numero \n");
  scanf("%d", &c);
  result[0] = a;
  result[1] = b;
  result[2] = c;
}
int main(void) {
  int f[3];
  ler3Numeros(f);
  for (int i = 0; i < 3; i++) {
    printf("\n %d", f[i]);
  }
}

//questao 5
#include <stdio.h>
/*
5) Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize struct para fazer o retorno.
*/

struct quatnum{
    int num1;
    int num2;
    int num3;
    int num4;
  };

struct quatnum ler4Numeros(){
  struct quatnum numeros;
  
  printf("1° numero: ");
  scanf("%i", &numeros.num1);

  printf("\n2° numero: ");
  scanf("%i", &numeros.num2);
  
  printf("\n3° numero: ");
  scanf("%i", &numeros.num3);
  
  printf("\n4° numero: ");
  scanf("%i", &numeros.num4);

  return numeros;
}

int main(){
  struct quatnum numeros;
  numeros = ler4Numeros();
  printf("\n%i", numeros.num1);
  printf("\n%i", numeros.num2);
  printf("\n%i", numeros.num3);
  printf("\n%i", numeros.num4);
  return 0;
}

//questao 6
#include <stdio.h>
int ler3letras(char *result) {

  printf("Coloque as tres letras \n");
  gets(result);
}
int main(void) {
  char f[3];
  ler3letras(f);
  for (int i = 0; i < 3; i++) {
    printf("\n %c", f[i]);
  }
}
//questao 7
#include <stdio.h>
#include <string.h>
struct palavra{
    char palavra1[30];
    char palavra2[30];
    char palavra3[30];
};

struct palavra ler3Palavras(){
  struct palavra palavras;
  printf("1° Palavra: ");
  fgets(palavras.palavra1, 30, stdin);

  printf("\n2° Palavra: ");
  fgets(palavras.palavra2, 30, stdin);

  printf("\n3° Palavra: ");
  fgets(palavras.palavra3, 30, stdin);

  return palavras;
}

int main(){
  struct palavra palavras = ler3Palavras();

  printf("\nPrimeira: %s", palavras.palavra1);
  printf("\nSegunda: %s", palavras.palavra2);
  printf("\nTerceira: %s", palavras.palavra3);

  return 0;
}

//questao 8

#include <stdio.h>
int cadastrarCliente(char *result) {
  printf("Coloque o nome do cliente \n");
   gets(result[0]);
}
int main(void) {
  char f[4][99];
  cadastrarCliente(f);
  puts(f);
}
//questao 9
// Online C compiler to run C program online

#include <stdio.h>
char validarNome(char *nome) {
  puts(nome);
  if (nome[20]&&!(nome[20]>47&&nome[20]<58)) {
    return 0;
  }
  return 1;
}
char validarSexo(char *sexo) {
  if (sexo[1]) {
    return 0;
  }
  puts(sexo);
  if (sexo[0] == 70 || sexo[0] == 77 || sexo[0] == 79 || sexo[0] == 102 ||
      sexo[0] == 109 || sexo[0] == 111) {
    return 1;
  }
  return 2;
}
char validarCpf(char *cpf) {
  if (cpf[14]) {
    return 0;
  }
  if ((cpf[0] > 47 && cpf[0] < 58) && (cpf[1] > 47 && cpf[1] < 58) &&
      (cpf[2] > 47 && cpf[2] < 58) && (cpf[4] > 47 && cpf[4] < 58) &&
      (cpf[5] > 47 && cpf[5] < 58) && (cpf[6] > 47 && cpf[6] < 58) &&
      (cpf[8] > 47 && cpf[8] < 58) && (cpf[9] > 47 && cpf[9] < 58) &&
      (cpf[10] > 47 && cpf[10] < 58) && (cpf[12] > 47 && cpf[12] < 58) &&
      (cpf[13] > 47 && cpf[13] < 58) && (cpf[3] == 46) && (cpf[7] == 46) &&
      (cpf[11] == 45)) {
    return 1;
  }
  return 2;
}
char validarNacimento(char *data) {
  if (data[10]) {
    return 0;
  }
  if ((data[0] > 47 && data[0] < 58) && (data[1] > 47 && data[1] < 58) &&
      (data[2] == 47) && (data[3] > 47 && data[3] < 58) &&
      (data[4] > 47 && data[4] < 58) && (data[5] == 47) &&
      (data[6] > 47 && data[6] < 58) && (data[7] > 47 && data[7] < 58) &&
      (data[8] > 47 && data[8] < 58) && (data[9] > 47 && data[9] < 58)) {
    return 1;
  }
  return 2;
}
struct cadastrar {
  char nome[20];
  char dataNasc[20];
  char cpf[15];
  char sexo[1];
};
struct cadastrar cadastrarCliente() {
  struct cadastrar cliente;
  printf("Nome: ");
  gets(cliente.nome);
  printf("Dia de nascimento [DD/MM/AAAA]: ");
  gets(cliente.dataNasc);
  printf("CPF [XXX.XXX.XXX-XX]: ");
  gets(cliente.cpf);
  printf("Sexo[M/F]: ");
  gets(cliente.sexo);
  return cliente;
}
int main(void) {
  struct cadastrar cliente = cadastrarCliente();
  printf("\n\n============Dados do cliente \n");
  if (!validarNome(cliente.nome)) {
    printf("\nNome invalido, ultrapassou o limite de carcteres(20)\n");
  };
    if(!validarSexo(cliente.sexo)){
  printf("\nUltrupassou o limite de caracteres");
  }
if(!validarCpf(cliente.cpf)){
       printf("\n ulrupassou o limite de cartere \n");
  }
    if(!validarNacimento(cliente.dataNasc)){
  printf("\nValor invalido, ulrupassou o limite de carteres\n");
  }
  if(validarSexo(cliente.sexo)==2){
  printf("\nValor invalido!, tente [M/F/O]");
  }
  if(validarCpf(cliente.cpf)==2){
       printf("\nValor invalido, tente no formato[XXX.XXX.XXX-XX] \n");
  }
    if(validarNacimento(cliente.dataNasc)==2){
  printf("\nValor invalido, tente no formato DD/MM/AAAA \n");
  }
  
  printf("Nome:");
  puts(cliente.nome);
  printf("Data de Nascimento:");
  puts(cliente.dataNasc);
  printf("CPF:");
  puts(cliente.cpf);
  printf("Sexo:");
  puts(cliente.sexo);
}
