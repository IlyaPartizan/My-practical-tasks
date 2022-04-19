#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << " Введите координаты x и y для заданной точки\n ";
	int x = 0;
	cin >> x;
	cout << "x = " << x << "\n";
	int y = 0;
	cin >> y;
	cout << "y = " << y << "\n";

	if (abs(x) <= pow(10, 6) && abs(y) <= pow(10, 6) && (x <= -2 && y >= 1))
		cout << 1;
	else
		cout << 0;
	return 0;
}