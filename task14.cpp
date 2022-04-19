#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x = 1; //Доброе утро
	int y = 2; //Добрый день
	int z = 3; //Добрый вечер
	int h = 0;
	cin >> h;
	if (8 <= h && h <= 22)
	{
		if (h >= 8 && h < 11)
		{
			cout << 1;

		}
		else
		{
			if (h >= 11 && h < 18)
			{
				cout << 2;

			}
			else
			{
				if (h >= 18 && h <= 22)
				{
					cout << 3;
				}
			}
		}
	}
	else
	{
		cout << "Введенное число не соответствует данным задачи";

	}

		
	return 0;
}
