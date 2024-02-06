#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    int m, n;
    while (m != n)
    {
        cout << "Введите количество строк: ";
        cin >> m;
        cout << "Введите количество столбцов: ";
        cin >> n;
    }

    int a[m][n];

    cout << endl
         << "Исходный массив: " << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            a[i][j] = rand() % 10;
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    cout << endl;
    int m2 = m;
    int n2 = n;
    int s;
    int maxs = 0;
    for (int j = 0; j < m - 1; j++)
    {
        s = 0;
        for (int i = 0; i < n - j - 1; i++)
        {
            s += a[i][j];
        }
        cout << "Сумма в столбце " << j + 1 << " = " << s << endl;
        if (s > maxs)
        {
            maxs = s;
        }
    }
    cout << "Максимальная сумма = " << maxs;

    return 0;
}