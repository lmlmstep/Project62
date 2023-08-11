#include <iostream>
using namespace std;
int main()
{
	int answer, A, B, RES;
	do {	 // вход в цикл
		cout << "\nSelect operation:\n";
		cout << "\n 1 - if you want to see SUM.\n";
		cout << "\n 2 - if you want to see DIFFERENCE.\n";
		cout << "\n 3 - if you want to exit.\n";
		cin >> answer;
		switch (answer) {
		case  1:    // если пользователь выбрал сложение
			cout << "Enter first digit:\n";
			cin >> A;
			cout << "Enter second digit:\n";
			cin >> B;
			RES = A + B;
			cout << "\nAnswer: " << RES << "\n";
			break; // остановка switch
		case  2:     // если пользователь выбрал вычитание
			cout << "Enter first digit:\n";
			cin >> A;
			cout << "Enter second digit:\n";
			cin >> B;
			RES = A - B;
			cout << "\nAnswer: " << RES << "\n";
			break; // остановка switch 
		case  3:     // если пользователь выбрал выход
			cout << "\nEXIT!!!\n";
			break;
		default:    // если выбранное действие некорректно
			cout << "\nError!!! This answer isn't correct\n";
		}
	} while (answer != 3);      // проверка условия
	cout << "\nBye...\n";
}


