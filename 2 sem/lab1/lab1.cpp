#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    int n;
    bool f = true;
    cout << "Введите размер массива " << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }

    int maxi = 0;
    int maxa = a[0];
    int k = 1;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] > maxa)
        {
            maxa = a[i];
            k = 1;
            maxi = i;
        }
        else
        {
            if (a[i] == maxa)
            {
                k += 1;
            }
        }
    }

    cout << endl
         << "Максимальный элемент массива = " << maxa;
    cout << endl
         << "Номер максимального элемента = " << maxi + 1;

    if (k > 1)
    {
        cout << endl
             << "Сумма максимальных чисел = " << k * maxa;
        cout << endl
             << "Количество максимальных чисел = " << k;
    }

    return 0;
}
