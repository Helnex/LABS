#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int m = 5;
    int arr[m][m];

    int maxElement = arr[0][0];
    int maxRow = 0;
    int maxCol = 0;
    // Заполняем массив случайными числами, находим максимальный элемент и его индексы
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            arr[i][j] = rand() % 90 + 10;
            cout << arr[i][j] << " ";
            if (arr[i][j] > maxElement)
            {
                maxElement = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
        cout << endl;
    }
    cout << endl
         << "Max element = " << maxElement << endl;

    // Удаляем строку с максимальным элементом
    for (int i = maxRow; i < m - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = arr[i + 1][j];
        }
    }
    // Удаляем столбец с максимальным элементом
    for (int i = 0; i < m; i++)
    {
        for (int j = maxCol; j < m - 1; j++)
        {
            arr[i][j] = arr[i][j + 1];
        }
    }
    cout << endl;
    // Выводим новый массив
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
