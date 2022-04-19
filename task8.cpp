#include <iostream>
using namespace std;

int main()
{
    const int a = -5;
    const int c = 1;
    const int b = 7;
    const int d = 13;
    int x = 0;
    cin >> x;
    if (x <= pow(10, 5) && ((x >= a  && x <= c) || (x >= b && x <= d)))
    {
        cout << 1;
    }
    else
        cout << 0;

}

