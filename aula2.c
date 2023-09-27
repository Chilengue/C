#include <stdio.h>
int main(int argc, char const *argv[])
{
    short int idade;
    int montante;
    long int n_conta;
    printf("qual e a sua oidade : ");
    scanf("%hd",idade);
    printf("Qual e o montante que qeuro depositar:");
    scanf("%d",&montante);
    scanf("Qual e o  numero da conta");
    scanf("%ld", &n_conta);

    printf("uma pessoa de %hd anos depositou $%d na conta %ld\n",idade,montante,n_conta);        return 0;
}
