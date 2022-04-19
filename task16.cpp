#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int m = 0;
	cin >> m;
	string a = "WINTER";
	string b = "SPRING";
	string c = "SUMMER";
	string d = "AUTUMN";
	if (m <= 12 && m >= 1)
	{
		if (m < 3 || m > 11)
		{
			cout << a;

		}
		else
		{
			if (m > 2 && m < 6)
			{
				cout << b;
		

			}
			else
			{
				if (m < 9 && m > 5)
				{
					cout << c;


				}
				else
				{
					if (m > 8 && m < 12)
					{
						cout << d;
					}
					
				}
			}
		}
		 

	}
	else
	{
		cout << "Введенное значение не сооитветствует заданию ";
	}
	
	return 0;
}
