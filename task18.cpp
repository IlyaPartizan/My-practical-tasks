#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");
    int a = 0;
    cin >> a;
    int b = 0;
    cin >> b;
    int c = 0;
    cin >> c;
    int d = 0;
    cin >> d;
    int e = 0;
    cin >> e;
    int f = 0;
    cin >> f;
    int i = 0;

    if (abs(a) <= pow(10, 5) && abs(b) <= pow(10, 5) && abs(c) <= pow(10, 5) && abs(d) <= pow(10, 5) && abs(e) <= pow(10, 5) && abs(f) <= pow(10, 5))
    {
        if (a % 2 == 0)
            i += a;
        if (b % 2 == 0)
            i += b;
        if (c % 2 == 0)
            i += c;
        if (d % 2 == 0)
            i += d;
        if (e % 2 == 0)
            i += e;
        if (f % 2 == 0)
            i += f;
        cout << i;
    }
    else
    {
        cout << "Введенные значения не соответствуют условию задачи";
    }
    return 0;


}