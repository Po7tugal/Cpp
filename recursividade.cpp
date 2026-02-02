#include <iostream>
using namespace std;

int fazerExpo(int num, int expo) {
    if (expo > 0) {
        return num * fazerExpo(num, expo - 1);
    } else {
        return 1;
    }
}

int fatorial(int numFatorial) {
    if (numFatorial > 0) {
        return numFatorial * fatorial(numFatorial - 1);
    } else {
        return 1;
    }
}

int main() {
    int numBase;
    int numExpo;
    int numFato;

    cout << "-------- EXPONENCIACAO --------\n\n";
    cout << "Diga um numero para fazermos um expoente: \n\n";
    cin >> numBase;
    cout << "\nDiga agora o expoente: \n\n";
    cin >> numExpo;
    cout << "\n";

    cout << fazerExpo(numBase, numExpo) << "\n\n";
    cout << "-------- FATORIAL --------\n\nDiga um Numero para fazer o fatorial: \n\n";
    cin >> numFato;
    cout << "\n" << fatorial(numFato);
}
