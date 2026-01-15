#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    string prim_nome = "Filipe", fnl_nome = "Portugal";
    int ano_de_nascimento = 2010, mes_de_nascimento = 11;
    int ano_atual = 2025, mes_atual = 12;

    cout << prim_nome << " " << fnl_nome;
    cout << " nascido em ";
    cout << ano_de_nascimento << " no mes " << mes_de_nascimento;
    cout << " logo ele tem ";

    if(mes_atual <= mes_de_nascimento) {
        cout << ano_atual - ano_de_nascimento - 1;
    } else {
        cout << ano_atual - ano_de_nascimento;
    }

  return 0;
}
