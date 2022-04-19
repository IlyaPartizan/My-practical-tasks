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
    
    int i = 1;
    if (abs(a) <= 100 && abs(b) <= 100 && abs(c) <= 100 && abs(d) <= 100)
    {
        if (a % 13 == 0)
            i = i * a;
        if (b % 13 == 0)
            i = i * b;
        if (c % 13 == 0)
            i = i * c;
        if (d % 13 == 0)
            i = i * d;
        
        cout << i;
    }
    else
    {
        cout << "Введенные значения не соответствуют условию задачи";
    }
    return 0;
}