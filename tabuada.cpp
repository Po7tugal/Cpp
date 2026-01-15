#include <iostream>

using namespace std;

const int TABUADAMAX = 10;

int calcularTabuada(int num) {

    cout << "\n";

    for (int i=0; i<=TABUADAMAX; i++) {
        cout << num << " X " << i << " = " << (num*i) << "\n";
    }

    return 0;
}

int main() {

    int numX;

    cout << "Diga um numero para que seja devolvido a tabuada ate 10 dele: \n\n";
    cin >> numX;

    calcularTabuada(numX);

    return 0;
}

