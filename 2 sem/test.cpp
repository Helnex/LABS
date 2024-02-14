#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    int m, n;
    cout << "Введите количество строк: ";
    cin >> m;
    cout << "Введите количество столбцов: ";
    cin >> n;

    int a[m][n];

    cout << endl
         << "Исходный массив: " << endl;
    int maxa = 0;
    int k = 1;
    int imax;
    int jmax;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            a[i][j] = rand() % 10;
            cout << a[i][j] << ' ';
            if (a[i][j] > maxa)
            {
                maxa = a[i][j];
                k = 1;
                imax = i;
                jmax = j;
            }
            else
            {
                if (a[i][j] == maxa)
                {
                    k += 1;
                }
            }
        }
        cout << endl;
    }
    cout << "Максимальный элемент = " << maxa;
    cout << endl
         << "Количество максимальных элементов " << k;
    cout << endl
         << "Индексы максимального элемента = " << imax << " " << jmax;

    return 0;
}