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
    int i = 0;
    if (abs(a) <= pow(10, 5) && abs(b) <= pow(10, 5) && abs(c) <= pow(10, 5) && abs(d) <= pow(10, 5) && abs(e) <= pow(10, 5))
    {
        if (a % 10 == 7)
            i += 1;
        if (b % 10 == 7)
            i += 1;
        if (c % 10 == 7)
            i += 1;
        if (d % 10 == 7)
            i += 1;
        if (e % 10 == 7)
            i += 1;
        cout << i;
    }
    else
    {
        cout << "Введенные значения не соответствуют условию задачи";
    }
    return 0;