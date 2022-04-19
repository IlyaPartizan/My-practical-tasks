
#include <iostream>

using namespace std;
int getFunction(const int a, const int b);
int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	int Function = getFunction(a, b);
	if (a >= pow(-2, 15) && a <= (pow(2, 15) - 1) && b >= pow(-2, 15) && b <= (pow(2, 15) - 1))
	{
		cout << Function;
	}
	else
	{
		cout << "Введенные a и b не соответствуют учловию задачи";
	}
	return 0;
}

int getFunction(const int a, const int b)
{
	if (a % 2 == 0)
	{
		return a * b;
	}
	else
	{
		return a + b;
	}
}
