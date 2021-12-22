#include <stdio.h>
#include <stdlib.h>

int menu_opcoes(void);
int confirmar_saida(void);


void main()
{

}

//-------------serve para confirmar a saida do utilizador-----------------
int confirmar_saida()
{
    int opcao;
    do
    {
        printf("\n\nTem certeza que pretende sair:\n0 - Sim\n9 - nao\nOPCAO ->");
        scanf("%d", &opcao);

    }while(opcao != 0 && opcao != 9);
    return opcao;
}

//-------------serve para exibir e receber a opcao do menu-------------------
int menu_opcoes()
{
    int opcao;
    do
    {
        system("cls");
        printf("\n\nEscolha a sua Opcao:\n1 - Registar escola\n2 - Registar utilizador\n3 - Registar transação\n4 - Consultar escolas\n5 - Consultar utilizadores\n6 - Consultar transaçõesv\n7 - Verificar estatisticas\n0 - sair\n\tOPCAO ->");
        scanf("%d", &opcao);

    }while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao != 6 && opcao != 7 && opcao != 0);
    return opcao;
}
