#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    int i;
    for (i = 0; i < argc; i++) {
        cout << "Argument " << i << " = " << argv[i] << std::endl;
    }

    int soma = atoi(argv[1]) + atoi(argv[2]);
    cout << "soma " << soma;
    return 0;
}
