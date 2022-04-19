#include <iostream>
 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int size = 0;
	cin >> size;
	int n = 0;
	int i = 0;
	int c = 0;
	string a = "YES";
	string b = "NO";
	if (size > 0)
	{
		while (i < size)
		{
			
			
			cin >> n;
			i++;
			if (n > 30000)
			{
				cout << "Введенные данные не соответствуют условию задачи ";
				break;
			}
			if (n == 0)
			{
				c++;
				
			}
			
			
		
			
			
		}
		if (c > 0)
			cout << a;
		else
			cout << b;

	}
	else
	{
		cout << "Введенное значение не соответствует условию задачи";
	}




	return 0;

}