#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    srand(time(0));
    int n;
    cout << "Введите размер массива " << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }

    bool f = true;
    int i = 0;
    while ((i < n) && (f))
    {
        if (a[i] > a[i + 1])
        {
            f = false;
        }
        i++;
    }

    if (f)
    {
        cout << endl
             << "Массив упорядочен";
    }
    else
    {
        cout << endl
             << "Массив не упорядочен";
    }

    return 0;
}