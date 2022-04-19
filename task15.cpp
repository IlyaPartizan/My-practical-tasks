#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	if (abs(a) <= 1000 && abs(b) <= 1000)
	{
		if (a > b)
		{
			cout << a;

	    }
		else
		{
			if (b > a)
			{
				cout << b;
			}
			else
			{
				cout << 0;
			}
		}
	}
	else
	{
		cout << "Введенные значения не соответствуют задаче";
	}
	return 0;