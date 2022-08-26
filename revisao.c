#include <stdio.h>

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