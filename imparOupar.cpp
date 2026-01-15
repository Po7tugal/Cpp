#include <iostream>

using namespace std;

int num=0, aux=0;

int main()  {
    cout << "Diga um numero para saber se e impar ou par: ";
    cin >> num;
    aux = num / 2;
    if ((aux * 2) == num) {
        cout << "seu numero e par";
    } else { cout << "seu numero e impar";}
    return 0;
}
