#include <iostream>
#include <stdio.h>
#include <ctime> // Importar a libraria ctime library

using namespace std;

time_t timestamp = time(&timestamp);
struct tm datetime = *localtime(&timestamp);
int anoAtual = datetime.tm_year + 1900;
int mesAtual = datetime.tm_mon + 1;
int diaAtual = datetime.tm_mday;

string grauIdade(int idade=15) {
    string resposta = "";

    if (idade >=0 && idade <=1){
        resposta = "recem-nascido";
    } else if (idade >1 && idade <=3){
        resposta = "bebe";
    } else if (idade >3 && idade <=12){
        resposta = "crianca";
    } else if (idade >12 && idade <=18){
        resposta = "adolescente";
    } else if (idade >18 && idade <=50){
        resposta = "Adulto";
    } else if (idade >50){
        resposta = "IDOSO, APOSENTA !!!!";
    } else {
        resposta = "Tu nao existe entao ne?";
    }
    return resposta;
}

int descobrirAno(int idadeParaDescobrirAno = 10) {
    int anoNasceu;

    anoNasceu = anoAtual - idadeParaDescobrirAno ;

    return anoNasceu;
}

int main() {
    //cout << grauIdade(1231213);
    char op = '0';
    int idadeX = 0;
    int mesX;
    int diaX;

    do {
        cout << anoAtual << " / " << mesAtual << " / " << diaAtual << "\n\n";
        cout << "O que pretende fazer? \n";
        cout << " 1 - Saber o grau da sua idade \n";
        cout << " 2 - Saber que ano nasceu \n";
        cout << " 3 - Saber o grau da sua idade \n\n";
        cout << "O que pretende fazer: ";
        cin >> op;

        /** Verificar o que e pra fazer **/
        switch (op) {

        case '1':
            cout << "Quantos anos voce tem? ";
            cin >> idadeX;
            cout << "\n\nvoce parece ser um " << grauIdade(idadeX) << "\n\n";
            break;

        case '2':
            cout << "Quantos anos voce tem? ";
            cin >> idadeX;
            cout << "\n\nSe nasceu entre o dia 1.1 e " << diaAtual << "." << mesAtual << " nasceu no ano " << descobrirAno(idadeX);
            cout << "\nSe nasceu entre o dia " << diaAtual << "-" << mesAtual << " e 31-12 nasceu no ano " << descobrirAno(idadeX - 1);
            break;

        case '3':
            cout << "Quantos anos voce tem? ";
            cin >> idadeX;
            break;
        default:
            break;

        }
    } while (op != '0');


    cout << "Sair do programa... fui!";

    return 0;
}
