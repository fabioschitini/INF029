// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    
    
    
 typedef struct alunos{
    int matricula;
    int existe;
    int id;
} Aluno;

Aluno alunos[999];
int contador=0;
for(int i=0;i<3;i++){
    printf("Colocque a matricula do corno: ");
    scanf("%d",&alunos[i].matricula);
    alunos[i].id=i;
    alunos[i].existe=1;
    contador++;
}

for(int n=0;n<contador;n++){
        printf("%d \n",alunos[n].matricula);
}

  int idDeletar;
printf("Coloque o id do corno que voce quer deletar: ");
scanf("%d",&idDeletar);

//printf("idDeletar: %d \n",idDeletar);
if(idDeletar<contador){
        alunos[idDeletar].existe=0;
} 
else{
    printf("Id nao existe foollll\n");
}

for(int m=0;m<contador;m++){
    if(alunos[m].existe){
        printf("%d\n",alunos[m].matricula);
    }
}

int opc, idopc;
printf("Selecione o ID do aluno a dar update: ");
scanf("%i", &idopc);

printf("Selecione a opção [1 = Matricula]: ");
scanf("%i", &opc);

switch(opc){
    case 1:
        printf("Coloque a nova matricula do corno: ");
        scanf("%d",&alunos[idopc].matricula);
    break;
    
    default:
        printf("Opção inválida.");
    break;
}
for(int x=0;x<contador;x++){
 if(alunos[x].existe){
        printf("%d\n",alunos[x].matricula);
    }
}
}