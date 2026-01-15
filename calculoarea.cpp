#include <iostream>

using namespace std;

double areaC;
const double PI = 3.1416;

int calcularArea(double raio) {

    areaC = (PI * raio * raio);
    cout << "\n\nSe o raio for: " << raio << " a area vai ser: " << areaC << "\n\n";

    return 0;
}

int main() {

    double raioX;

    cout << "Diga um raio para que seja devolvido a area do circulo ( C = (Pi * raio * raio) ) \n\n";
    cin >> raioX;

    calcularArea(raioX);

    return 0;
}
