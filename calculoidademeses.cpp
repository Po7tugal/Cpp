#include <iostream>

using namespace std;

int meses;

int calcularIdade(int ano=0) {

    meses = (ano*12);
    cout << "\nOs meses em " << ano << " ano(s) sao " << meses << "\n\n";

    return 0;
}

int main() {
    int anoX;

    cout << "Diga a quantidade de anos para que seja devolvido os meses \n\n";
    cin >> anoX;

    calcularIdade(anoX);

    return 0;
}
