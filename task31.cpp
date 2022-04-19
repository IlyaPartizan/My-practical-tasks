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
    int plan = 50;
    if (a >= 0 && a <= 1000 && b >= 0 && b <= 1000 && c >= 0 && c <= 1000 && d >= 0 && d <= 1000)
    {
        cout << (a + b + c + d) - plan;
    }
    else
    {
        cout << "Введенные значения не соответствуют условию задачи";
    }

}
