#include <iostream>
using namespace std;

bool comporta1Aberta = true;
bool comporta2Aberta = false;
int horas = 0;
int horario;
int quantidadeAgua = 91000;

int controlarComportas() {
    if (quantidadeAgua >= 100000) {
        comporta2Aberta = true;
    } else if (quantidadeAgua <= 90000) {
        comporta2Aberta = false;
    }
}

int controlarAgua() {

    for (horas; horas <= horario; horas++) {
        quantidadeAgua += 5000;
        controlarComportas();

        if(comporta1Aberta == true) {
           quantidadeAgua -= 3000;
        } if (comporta2Aberta == true) {
            quantidadeAgua -= 3000;
        }
    }
}

string mostrarComportas() {

    cout << "-------- VERIFICAR COMPORTAS --------";
    cout << "\n\n";
    cout << "diga em que hora voce gostaria de verificar: ";
    cin >> horario;

    controlarAgua();

    if (comporta1Aberta == comporta2Aberta == true) {
        cout << "\n" << horario << " - " << "Duas comportas";
    } else {
        cout << "\n" << horario << " - " << "Uma comporta";
    }

    cout << quantidadeAgua;
}


int main() {
    mostrarComportas();
    controlarAgua();
    controlarComportas();
}
