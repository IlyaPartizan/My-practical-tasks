#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	cin >> n;
	int x = 1;
	
	
	if (n >= 1 && n <= 1000)
	{
		while (n != 0)
		{
			cout << "Numbers of chips: " << x << "\n";
			n = n - 1;
			x += 1;
		}
	}
	else
	{
		cout << "Введенное значение не соответствует условию задачи";
	}

	return 0;
}