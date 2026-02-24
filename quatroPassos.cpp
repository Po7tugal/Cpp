#include<iostream>
using namespace std;

int passo4(int num4) {
    cout << "\n" << num4 << " * 4 = ";
    num4 *= 4;
    passo3(num4);
    passo2(num4);
    cout << num4;
    return num4;
}

int passo1(int num1) {
    cout << "\n" << num1 << " / 2 = ";
    num1 /= 2;
    passo4(num1);
    cout << num1;
    return num1;
}

int passo3(int num3) {
    cout << "\n" << num3 << " / 3 = ";
    num3 /= 3;
    passo1(num3);
    cout << num3;
    return num3;
}

int passo2(int num2) {
    cout << "\n" << num2 << " * 3 = ";
    num2 *= 3;
    passo1(num2);
    cout << num2;
    return num2;
}

int main() {
    int num;
    cout << " --------- 4 PASSOS ----------- \n\n";
    cout << "escreva um numero: ";
    cin >> num;

    if (num >= 0  && num <= 100) {
        cout << passo1(num);
    } else if (num > 100) {
        cout << passo2(num);
    } else if (num >= -100 && num <= -1) {
        cout << passo3(num);
    } else if (num < -100) {
        cout << passo4(num);
    }
}
