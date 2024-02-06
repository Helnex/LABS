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
    int k;
    cout << endl
         << "Введите номер элемента: ";
    cin >> k;
    k = k - 1;

    cout << endl
         << "По кольцу влево: ";
    for (int i = k; i < n; ++i)
    {
        cout << a[i] << ' ';
    }
    for (int i = 0; i < k; ++i)
    {
        cout << a[i] << ' ';
    }
    cout << endl
         << "По кольцу вправо: ";
    for (int i = k; i > 0; i--)
    {
        cout << a[i] << ' ';
    }
    for (int i = n - 2; i > k; i--)
    {
        cout << a[i] << ' ';
    }
    return 0;
}