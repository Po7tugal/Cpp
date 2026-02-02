#include <iostream>
using namespace std;

int main() {

    string letrinhas[4] = {"L", "Santos", "Aiaiai", "Ja fostes"};

    for (string palavrinha : letrinhas) {
        cout << palavrinha << "\n";
    }
    return 0;
}
