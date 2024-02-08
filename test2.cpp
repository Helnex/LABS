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
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            a[i][j] = rand() % 10;
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    int mid = m / 2;
    int x = mid;
    int y = mid;
    a[0][mid] = 1;

    for (int i = 1; i < m; i++)
    {
        if (i <= mid)
        {
            x--;
            y++;
        }
        else
        {
            x++;
            y--;
        }
        a[i][y] = 1;
        a[i][x] = 1;
    }
    cout << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}