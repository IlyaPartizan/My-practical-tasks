#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 1;
	int i = 0;
	int max = 0;
	
	while (n != 0)
	{
		cin >> n;
		
		if (n <= (pow(2, 15) - 1) && n >= -(pow(2, 15) - 1))
		{
            
			
		}
		else
		{
			cout << "Введенные значения не соответствуют условию задачи";
		}
	}
	return 0;
}