#include <iostream>

using namespace std;

double media;

int calcularMedia(double num1, double num2, double num3) {

    media = (num1 + num2 + num3)/3;

    return media;
}

int main() {

    double num1X;
    double num2X;
    double num3X;

    cout << "Diga 3 numeros para que seja devolvido a media \n\n";

    cout << "Diga o primeiro num: ";
    cin >> num1X;

    cout << "Diga o segundo num: ";
    cin >> num2X;

    cout << "Diga o terceiro num: ";
    cin >> num3X;

    cout << "\nA media dos 3 numeros e ";
    cout << calcularMedia(num1X, num2X, num3X);

    return 0;
}

