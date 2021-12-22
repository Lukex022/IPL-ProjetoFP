#include <stdio.h>
#include <stdlib.h>

void main()
{

}

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
