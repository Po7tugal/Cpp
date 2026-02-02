#include <iostream>
using namespace std;

int main() {
    string letters[3][4] = {
        { "A", "B", "C" },
        { "E", "F", "G", "H"},
        { "1", "2", "3", "4" }
    };

    for (int i = 0; i < 3; i++) {
        cout << "\n Array " << i << "\n";
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << "\n";
        }
    }
}
