#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	int c = 0;
	cin >> c;
	if (abs(a) < pow(10, 9) && abs(b) < pow(10, 9) && abs(c) < pow(10, 9))
	{
		if((a % 2 == 0) || (b % 2 == 0) || (c % 2 == 0))
		{
			cout << 0;
		}
		else
		{
			if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 == 0))
			{
				cout << 0;
		    }
			else
			{
				cout << 1;
			}
		}
	}
	else
	{
		cout << " Введенные данные не соответствуют условию ";
	}