#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 5, y;
	int urav;
	int sum = 0;

	cout << "Введите Y - ";
	cin >> y;

	for (int n = 3; n < 9; n++)
	{
		sum *= n;
		cout << sum << endl;
	}

	urav = log(pow(y, 2)) + sum;
	cout << "Z = " << urav << endl;

	system("pause");
	return 0;
}
