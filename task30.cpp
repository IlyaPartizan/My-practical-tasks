#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int r = 0;
	int i = 0;
	int R = 0;
	string a = "YES";
	string b = "NO";
	
	while(r != -1 && R != -1)
	{
		cin >> r;
		cin >> R;
		if (r >= 30 && r <= 500 && R >= 30 && R <= 500)
		{
			if (r < R)
			i++;
			
			
		}
		
		
	}
	if (i > 0)
		cout << b;
	else
		cout << a;
	
	
	return 0;
}