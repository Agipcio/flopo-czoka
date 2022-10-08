#include <iostream>
using namespace std;

int main() {
    char dzialanie;
    float num1, num2;
    cout << "Wprowadz dzialanie ";
    cin >> dzialanie;
    cout << "Wprowadz liczby " << endl;
    cin >> num1 >> num2;

    switch (dzialanie) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            cout << "Blad!";
            break;
    }

    return 0;
}