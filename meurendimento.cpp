#include <iostream>

using namespace std;

double salario;
const int MESESANO = 12;

int calcularRendimento(double ganhoH, int horasM) {

    salario = (ganhoH * horasM);
    cout << "\n" << "Seu salario e: " << salario << "/mes e sua media anual de rendimento e: " << (salario*MESESANO) << "/ano \n\n";

    return 0;
}

int main() {

    double ganhoX;
    int horasX;

    cout << "Diga voce ganha por hora e o numero de horas trabalhadas no mes";

    cout << " para que seja devolvido seu salario e uma suposicao da renda anual \n\n" << "Quanto voce ganha p/hora: \n\n";
    cin >> ganhoX;

    cout << "\n\nQuantas horas voce trabalha por mes: \n\n";
    cin >> horasX;

    calcularRendimento(ganhoX, horasX);

    return 0;
}
