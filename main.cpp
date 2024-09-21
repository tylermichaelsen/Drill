// get continuous input

#include "PPP.h"


int main() {
	cout << "Enter an equation: ";
	double num1, num2, result;
	char operation;
	while (cin >> num1 >> operation >> num2) {
		switch (operation) {
			case '+':
				result = num1 + num2;
				break;
			case '-':
				result = num1 - num2;
				break;
			case '*':
				result = num1 * num2;
				break;
			case '/':
				result = num1 / num2;
				break;
			default:
				cout << "Dont know that operator.\n";
		}
		cout << num1 << " " << operation << " " << num2 << " = " << result << endl;
	}
}