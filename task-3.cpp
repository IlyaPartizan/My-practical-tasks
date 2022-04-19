#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a = 0.0;
    cin >> a;
    double b = 0.0;
    cin >> b;
    double c = 0.0;
    cin >> c;
    if (abs(a) <= pow(10, 6) && abs(b) <= pow(10, 6) && abs(c) <= pow(10, 6) && abs(a) >=0 && abs(b) >= 0 && abs(c) >= 0)
    {
        cout << " a + b - c =\n " << a << " + " << b << " + " << c << " = " << a + b + c;
    }
    else
        cout << "Ошибка";
    return 0;
}

