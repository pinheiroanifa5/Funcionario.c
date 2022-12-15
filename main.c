#include <stdio.h>
#include <stdlib.h>

struct Funcionario    //lista de variaveis
{
char nome[5];
int idade;
};
typedef struct Funcionario func; //define o tipo de dado funcionario

int main(){

int i;
func ficha[5];
int a;
for ( i = 0 ; i < 5; i++ )   //gerar lista
{
printf("\nDigite o nome do funcionario e a sua idade: ",i+1);
scanf("%s \n",ficha[i].nome);

//printf("Digite a sua idade: \n",ficha[i].idade);
scanf(" %d",&ficha[i].idade);
}
for ( i = 0 ; i < 5 ; i++ )   //gerar segunda lista
{
printf("\nFuncionario %d",i+1);
printf("\n\nNome:%s \n",ficha[i].nome);

printf("\nIdade:%d \n",ficha[i].idade);
printf("-----------");
}
return 0;
}
