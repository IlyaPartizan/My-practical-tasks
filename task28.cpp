#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double L = 0;
    cin >> L;
    double R = 0;
    cin >> R;
    double sm = 0.0;
    string a = "inch";
    string b = "cm";
    int i = L;
    double temp = 0.0;
    
    if (R > L && R <= pow(10, 5) && L <= pow(10, 5) && R == (long long)R && L == (long long)L)
    {        
        while (i <= R)
        {
            temp++;
            sm = 2.54 * temp;
            
            
            cout << i << " " << a << " = " << fixed << setprecision(2) << sm << " " << b << "\n";
            i++;
        }
    }
    else
    {
        cout << "Введенные данные не соответствуют условию задачи ";
    }
    return 0;
}