// Online C compiler to run C program online

#include <stdio.h>

int contadorAluno=0;
 typedef struct alunos{
    int matricula;
    int existe;
    int id;
} Aluno;
    Aluno alunos[999];
    
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

void aluno(){
 cadrastar(){
      printf("Colocque a matricula do corno: ");
    scanf("%d",&alunos[contador].matricula);
    alunos[contador].id=contador;
    alunos[contador].existe=1;
    contador++;
 }
 imprimir(){
     for(int n=0;n<contador;n++){
        printf("%d \n",alunos[n].matricula);
}
 }
 
 deletar(){
  int idDeletar;
printf("Coloque o id do corno que voce quer deletar: ");
scanf("%d",&idDeletar);
if(idDeletar<contador){
    printf("%d id do crono: \n",alunos[idDeletar].id);
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
 }
 update(){
      int opc,idOpc;
          printf("Selecione a id do corno");
          scanf("%d",idOpc);
          if(idOpc<contador||alunos[idOpc]==0){
    printf("Id do corno nao existe");
} 
else{
printf("Selecione a opçao que voce quer editar [1 = Matricula, 2 = SAIR]:");
    scanf("%i", &opc);
    switch (opc){
        case 1:
    printf("Colocque a nova matricula do corno: ");
    scanf("%d",&alunos[idOpc].matricula);
        break;
        case 2:
            aluno();
        break;
        default:
            printf("Opçao fodase");
        break;
    }
}
          
    
 }
   
}



int main() {
    // Write C code here
  int codigo[20];
  int contador=0;
  int holder;
  for(int i=0;i<5;i++){
      codigo[i]=i;
      contador++;
  }
  int id=2;
  for (int j=id;id<contador;id++){
      codigo[j]=codigo[j+1];
      
  }
}
