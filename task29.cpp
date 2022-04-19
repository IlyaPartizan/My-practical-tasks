#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 0;
    cin >> n;
    int i = 1;
    if (n >= 3 && n <= 90 && n % 3 == 0)
    {
        while (n >= 3)
        {
            n = n - 3;
            i = i * 2;
            
        }
        cout << i;
        
    }
    else
    {
        cout << "Введенное значение не соответствует условию задачи";
    }
    

    return 0;

}
