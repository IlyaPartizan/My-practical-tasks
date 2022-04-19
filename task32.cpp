#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n = 1;
	int x = 1;

	if (n >= 0 && n <= pow(2, 15))
	{
		while (x != 0)
		{
			if (x <= (pow(2, 15) - 1))
			{
				cin >> x;
				if (x != 0)
				{
					n++;
				}
				else
				{
					cout << n - 1;
				}
			}
			else
			{
				cout << "Введенное значение не соответствует условию задачи";
			}
		}

	}
	else
	{
		cout << "Введенное значение не соответствует условию задачи";
	}

	return 0;
}