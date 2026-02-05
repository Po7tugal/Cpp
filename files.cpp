#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // cria e abre um ficheiro de texto
    ofstream MyFile("billiejean.txt");

    // escreve no ficheiro
    MyFile << "";

    // fecha o ficheiro
    MyFile.close();

    string myText;

    ifstream MyReadFile("billiejean2.txt");

    while(getline(MyReadFile, myText)) {
        cout << myText << "\n";
    }

    MyReadFile.close();

    string bio;
    cout << "Diz o teu nome completo: ";
    //cin >> bio;
    getline(cin, bio);
    cout << bio;
}
