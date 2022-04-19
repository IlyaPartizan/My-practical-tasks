#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 0;
    cin >> n;
    int i = 0;
    int N = 0;
    int boys = 0;
    int girls = 0;
    int tempBoys = 0;
    int tempGirls = 0;
    if (n >= 2 && n <= 40)
    {
        while (i != n)
        {
            cin >> N;
            if ((N <= 300 && N >= 30) || (N <= -30 && N >= -300))
            {
                if (N < 0)
                {
                    boys += N;
                    tempBoys++;
                    i++;
                }
                else
                {
                    girls += N;
                    tempGirls++;
                    i++;
                }
            }
            else
            {
                cout << "Введенное значение не соответствует условию задачи";
            }
            
        }
        cout << abs(boys / tempBoys) << " " << girls / tempGirls;
    }
    else
    {
        cout << "Введенное значение не соответствует условию задачи";
    }
    return 0;
}