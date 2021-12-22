#include <stdio.h>
#include <stdlib.h>

int menu_opcoes(void);
int confirmar_saida(void);

typedef struct
{
    int identificador;
    char nome[255];
    char abreviatura[10];
    char campus[10];
    char localidade[30];
}t_escola;

typedef struct
{
    int identificador;
    int identificador_escola;
    char nome[255] ;
    int nif[9];
    char tipo_utilizador[50];
    char email[255];
    float saldo;

}t_utilizador;

typedef struct
{
    int identificador;
    int identificador_utilizador;
    char tipo_transacao[15];
    float valor;
    char data[10];
    char hora[8];
}t_transacao;




void main()
{
    t_escola vetor_escolas[10];
    t_utilizador vetor_utilizadores[120];
    t_transacao vetor_transacoes[120];



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
        printf("\n\nEscolha a sua Opcao:\n1 - Registar escola\n2 - Registar utilizador\n3 - Registar transa��o\n4 - Consultar escolas\n5 - Consultar utilizadores\n6 - Consultar transa��esv\n7 - Verificar estatisticas\n0 - sair\n\tOPCAO ->");
        scanf("%d", &opcao);

    }while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao != 6 && opcao != 7 && opcao != 0);
    return opcao;
}
