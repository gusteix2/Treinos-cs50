#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string nome = get_string("Qual seu nome? ");
    printf("Ola, %s!\n", nome);

    int idade = get_int("Qual sua idade? ");

    string localizacao = get_string("Qual nome do seu bairro? ");

    string telefone = get_string("Qual seu telefone para contato? ");

    printf("Seu Registro foi salvo: nome - %s, idade - %i, localizacao - %s, telefone - %s\n",
           nome, idade, localizacao, telefone);

    return 0;
}
