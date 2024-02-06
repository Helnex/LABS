#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    int a[100];
    int n = 5;
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10;
        cout << a[i] << " ";
        if (a[i] % 2 == 0)
            k += 1;
    }

    cout << endl
         << k;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            n++;
            for (int j = n; j >= i + 1; j--)
                a[j] = a[j - 1];
            a[i] = -1;
            i++;
        }
        else
        {
            for (int j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
            i--;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
