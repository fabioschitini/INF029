// Online C compiler to run C program online

#include <stdio.h>

int main() {
    int opc;
    printf("Selecione a opçao [1 = ALUNOS]: ");
    scanf("%i", &opc);
    switch (opc){
        case 1:
            aluno();
        break;
        default:
            printf("Opçao fodase\n");
            main();
        break;
    }
}

void aluno(){
        
 typedef struct alunos{
    int matricula;
    int existe;
    int id;
} Aluno;
contador=0;
    Aluno alunos[999];
 cadrastar(){
      printf("Colocque a matricula do corno: ");
    scanf("%d",&alunos[contador].matricula);
    alunos[contador].id=contador;
    alunos[contador].existe=1;
    contador++;
 }
    int opc;
    printf("Selecione a opçao [1 = CADASTRAR, 2 = SAIR]: ");
    scanf("%i", &opc);
    switch (opc){
        case 1:
            //cadastrar();
        break;
        case 2:
            main();
        break;
        default:
            printf("Opçao fodase");
        break;
    }
}
