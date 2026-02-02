#include <iostream>
using namespace std;

int main() {
    string food = "pizza";
    string* ptr = &food;
    *ptr = "legumes";
    cout << food;
    cout << "\n";
    cout << &food;

    cout << "\n";
    cout << ptr;
    cout << "\n";
    cout << *ptr;

    return 0;
}
