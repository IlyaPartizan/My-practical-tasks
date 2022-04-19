//не факт что прога работает насколько помню не доделал до конца
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 0;
    cin >> n;
    if (n >= 1 && n <= 40)
    {
        int* data = new int(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
            cin >> data[i];
        for (int i = 0; i < n; i++) {
            if (data[i] <= 5 && data[i] >= 1)
            {
                if (data[i] = 5)
                {
                    sum++;
                }
            }
            else
            {
                
                cout << "Ошибка";
                return 0;
            }
        }
        cout << sum;
        delete[] data;
    }
    else
    {
        cout << "Ошибка";
    }
    
    return 0;
}