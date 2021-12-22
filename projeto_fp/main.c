#include <stdio.h>
#include <stdlib.h>

struct escola
{
    int identificador;
    char nome[255];
    char abreviatura[10];
    char campus[10];
    char localidade[30];
};

struct utilizador
{
    int identificador;
    int identificador_escola;
    char nome[255] ;
    int nif[9];
    char tipo_utilizador[50];
    char email[255];
    float saldo;

};

struct transacao
{
    int identificador;
    int identificador_utilizador;
    char tipo_transacao[15];
    float valor;
    char data[10];
    char hora[8];
};

void main()
{

}
