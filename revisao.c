#include <stdio.h>
#include <string.h>


// Questão 1
int main()
{       
    int massa,tempo=0;
     printf("Coloque a massa do material em gramas\n");
        scanf("%d",&massa);

 
    while(massa>0.10){
        massa*=0.75;
        tempo+=30;
    }
    printf("O tempo em segundos necessario e:%d",tempo);
    return 0;
}

// Questão 2
int main() {
    int abvin=0, accin=0, i = 0, idade;
    while (i == 0){
        printf("Coloque a idade da pessoa\n");
        scanf("%d",&idade);
        if (idade < 21){
            abvin++;
        }
        else if (idade > 50){
            accin++;
        }
        printf("Deseja parar? [0 = NÃO, 1 = SIM]");
        scanf("%d", &i);
    }

    printf("\nTotal de pessoas abaixo de vinte e um: %i", abvin);
    printf("\nTotal de pessoas acima de cinquenta: %i", accin);
    
    return 0;
}

// Questão 3
int main()
{
    int A=5000000;
    int B=7000000;
    int anos=0;
    while(A<=B){
        A*=1.03;
        B*=1.02;
        anos++;
    }
    printf("O tempo em anos necessario é:%d",anos);
    
}

// Questão 4
int main()
{       
    float J = 1.10, C = 1.50;
    int ano;
 
    while(C>J){
        J += 0.03;
        C += 0.02;
        ano++;
    }
    printf("O tempo em anos necessario e: %d", ano);
    return 0;
}

// Questão 5
int main() {
{
   char str[50];
   int idade=0;
   int contador=0;
   char arr[20][45];
    for(int i=0;i<20;i++){
            printf("Coloque o nome da pessoa\n");
            scanf("%s",str);
            printf("Coloque a idade da pessoa\n");
            scanf("%d",&idade);
             int yep=str[0];
            if(75<yep&&yep<84){
                strcpy(arr[contador], str);
                printf("%s \n",arr[0]);
                contador++;
            }
    }
    return 0;
}
}


// Questão 6
int main(){
    char let[15][2][99];
    float num[15][3];

    for (int i = 0; i < 15; i++){
        printf("\nNome do aluno %i: ", i+1);
        fgets(let[i][0], 99, stdin);
        for (int j = 0; j < 2; j++){
            printf("Nota %i: ", j+1);
            scanf("%f", &num[i][j]); 
        }
        getchar();
        
        num[i][2] = (num[i][0] + num[i][1])  / 2;
        
        printf("Media: %.2f\n", num[i][2]);
        
        if (num[i][2] >= 5.0){
          strcpy(let[i][1], "Situação: AP");
        }
        else{
          strcpy(let[i][1], "Situação: RP");
        }
        puts(let[i][1]);
    }
}

// Questão 8
int main(){
    int arr[20], maior, menor,par, soma;
    float media, per;
    
    for (int i = 0; i < 20; i++){
        printf("Numero %i: ", i+1);
        scanf("%i", &arr[i]);
        soma += arr[i];
        
        if (i == 0){
            maior = arr[i];
            menor = arr[i];
        }
        else{
            if (arr[i] > maior)
                maior = arr[i];
            if (arr[i] < menor)
                menor = arr[i];
        }
        if(arr[i]%2==0)
            par++;
    }
    
    per = par * 5;
    media = soma / 20;
    
    printf("\nMaior: %i", maior);
    printf("\nMenor: %i", menor);
    printf("\nPercentual de pares: %.2f %", per);
    printf("\nMedia: %.2f", media);
}

// Questão 9
int main(){
    int arr[10][10], k=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            arr[i][j] = k;
            k++;
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%i\n", arr[i][i]);
    }
}

// Questão 10
int main(){
    int arr[10][10], k=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            arr[i][j] = k;
            k++;
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i % 2 == 0 && j % 2 != 0)
                printf("%i", arr[i][j]);
        }
    }
}

// Questao 11
int main(){
    int arr[10][10], arrinv[10][10], k=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            arr[i][j] = k;
            k++;
        }
    }
            printf("arr=%i\n", arr[10][10]);

    for(int i=9, l=0;i>=0;i--, l++){
        printf("\n\ni=%d,l=%d\n\n",i,l);
        for(int j=9, m=0;j>=0;j--, m++){
            printf("j=%d,m=%d\n",j, m);
            arrinv[l][m] = arr[i][j];
            printf("arr=%i\n", arr[i][j]);
            printf("arrinv=%i\n", arrinv[l][m]);
        }
        
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%i ", arrinv[i][j]);
        }
        printf("\n");
    }
}