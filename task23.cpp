#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 0;
    cin >> n;
    if (n >= 1 && n <= 1000)
    {
        if (n % 2 == 0)
        {
            n += 5;
            cout << n;
        }
        else
        {
            n += 11;
            cout << n;
        }
    }
    else
    {
        cout << "Введенное значение не соответствует условию задачи";
    }

    return 0;

    
}
