#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    cin >> a;
    int b = 0;
    cin >> b;
    if (abs(a) <= pow(10, 9) && abs(b) <= pow(10, 9))
    {
        cout << a - b;
    }
    else
        cout << "Ошибка";
    return 0;
}

