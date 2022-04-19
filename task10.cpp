#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x = 0;
	cin >> x;

	if (abs(x) <= pow(10, 9) && x % 2 == 0)
		cout << 1;
	else
		cout << 0;
	return 0;
}

