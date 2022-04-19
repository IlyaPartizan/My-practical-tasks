#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x = 0.0;
	cin >> x;
	if (x > 0 && x <= pow(10, 5))
	{
		cout <<3 * sqrt(x);
	}
	return 0;
	
}

