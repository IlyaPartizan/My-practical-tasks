#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x = 0;
	cin >> x;
	if (x > 0 && x <= 1000)
	{
		if (x >= 150)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	   

	}
	else
	{
		cout << " число не соответствует параметрам ";
	}
}