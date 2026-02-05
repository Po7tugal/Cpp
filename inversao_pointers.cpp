// ---------- JEITO 1 ----------------

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

// --------- JEITO 2 ( com continuacao )  --------------

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
    int z;
    int w;

    cout << "------- INVERSAO -------\n\n";
    cout << "vamos fazer a inversao do X, do Y, do Z e do W \nDiga o valor do X: ";
    cin >> x;
    cout << "Agora diga o valor do Y: ";
    cin >> y;
    cout << "Agora diga o valor do Z: ";
    cin >> z;
    cout << "Agora diga o valor do W: ";
    cin >> w;

    mudarXY(x, w);
    mudarXY(w, z);
    mudarXY(y, z);

    cout << "\nx: " << x;
    cout << "\ny: " << y;
    cout << "\nz: " << z;
    cout << "\nw: " << w;

    cout << "\n";

}
