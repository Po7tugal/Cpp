/* #include<iostream>
using namespace std;

void mudarXY(int* x1, int* y1) {
    int aux = 0;

    aux = *x1;
    *x1 = *y1;
    *y1 = aux;
}

int main() {
    int x;
    int y;

    cout << "------- INVERSAO -------\n\n";
    cout << "vamos fazer a inversao do X e do Y \nDiga o valor do X: ";
    cin >> x;
    cout << "Agora diga o valor do Y: ";
    cin >> y;

    mudarXY(&x, &y);
    cout << "\nx: " << x;
    cout << "\ny: " << y;

} */

#include<iostream>
using namespace std;

void mudarXY(int &x1, int &y1) {
    int aux = 0;

    aux = x1;
    x1 = y1;
    y1 = aux;
}

int main() {
    int x;
    int y;

    cout << "------- INVERSAO -------\n\n";
    cout << "vamos fazer a inversao do X e do Y \nDiga o valor do X: ";
    cin >> x;
    cout << "Agora diga o valor do Y: ";
    cin >> y;

    mudarXY(x, y);
    cout << "\nx: " << x;
    cout << "\ny: " << y;

}
