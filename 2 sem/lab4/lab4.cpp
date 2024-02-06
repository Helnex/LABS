#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    int n = 10;
    int a[n];

    cout << endl
         << "Исходный массив: ";
    for (int i = 0; i < n; ++i)
    {
        a[i] = rand() % 10;
        cout << a[i] << ' ';
    }

    cout << endl
         << "По кольцу влево: ";
    int i = 3;
    for (int j = i; j < n; ++j)
    {
        cout << a[j] << ' ';
    }
    for (int j = 0; j < i; ++j)
    {
        cout << a[j] << ' ';
    }
    cout << endl
         << "По кольцу вправо: ";
    for (int j = i; j > 0; j--)
    {
        cout << a[j] << ' ';
    }
    for (int j = n - 2; j > i; j--)
    {
        cout << a[j] << ' ';
    }
    return 0;
}