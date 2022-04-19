#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x = 0;
	cin >> x;
	string a = "YES";
	string b = "NO";
	if (x >= 100 && x <= pow(10, 9))
	{
		if (x % 100 == 55)
		{
			cout << a;
	    }
		else
		{
			cout << b;
		}
	}
	else
	{
		cout << " Введенные данные противоречат ограничениям условия задачи ";
	}
return 0;

}