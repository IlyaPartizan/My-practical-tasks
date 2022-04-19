#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	cin >> n;
	string a = "Curcio\n";
	if (n >= 1 && n <= 1000)
	{
		while (n != 0)
		{
			cout << a;
			n = n - 1;
	    }
	}
	else
	{
		cout << "Введенное значение не соответствует условию задачи";
	}
		
 return 0;
}

