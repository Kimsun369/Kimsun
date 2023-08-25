#include <iostream>
using namespace std;
int main() {
  int number1, number2;
  char operation;
  bool continueCalculating = true;

  while (continueCalculating) {
    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter an arithmetic operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> number2;

    switch (operation) {
      case '+':
        cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
        break;
      case '-':
        cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
        break;
      case '*':
        cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
        break;
      case '/':
        cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
        break;
      default:
        cout << "Invalid operation" << endl;
        break;
    }

    cout << "Do you want to continue calculating? (y/n): ";
    cin >> operation;

    if (operation != 'y') {
      continueCalculating = false;
    }
  }

  return 0;
}
