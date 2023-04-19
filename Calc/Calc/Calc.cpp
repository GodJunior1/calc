#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float a = 0;
	float b = 0;
	char operation = 0;

	cout << "Введите первое число: " << endl;
	cin >> a;

	cout << "Введите второе число: " << endl;
	cin >> b;

	cout << "Выберите действие которое хотите произвезти с числами +, -, *, /: ";
	cin >> operation;

	switch (operation)
	{
	case '+':
		cout << a + b<< endl;
		break;
	case '-':
		cout << a - b<< endl;
		break;
	case '*':
		cout << a * b<< endl;
		break;
	case '/':
		cout << a / b << endl;
		break;
	

	}



}

