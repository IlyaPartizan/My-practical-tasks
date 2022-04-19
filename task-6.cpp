#include <iostream>
#include <cmath>
using namespace std;
const int getY(const int x);
int main()
{
	int x = 0;
	cin >> x;
	const int y = getY(x);
	if (abs(x) < pow(10, 9))
	{
		cout << y;
	}
	return 0;

}

const int getY(const int x)
{
	return abs(1-abs(x)) + pow(x, 2);
}
