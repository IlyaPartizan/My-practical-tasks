#include <iostream>
using namespace std;

int main()
{
    
    int size = 0;
    cin >> size;
    int *data = new int[size];
    for (int i = 0; i < size; i++)
        cin >> data[i];
    int min = 0;
    int max = 0;
    for (int i = 0; i < size; i++) {

        if (data[min] > data[i])
            min = i;
        if (data[max] < data[i])
            max = i;
    }

    if (min > max) {
        for (int i = max; i < min; i++)
            for (int j = max + 1; j < min - 1; j++) {
                if (data[j] > data[j + 1]) {
                    int tmp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = tmp;
                }
            }
       
    }
    else {
        for (int i = min; i < max; i++)
            for (int j = min + 1; j < max - 1; j++) {
                if (data[j] > data[j + 1]) {
                    int tmp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = tmp;
                }
            }
     
    }
    for (int i = 0; i < size; i++)
        cout << data[i] << " ";

    return 0;
}