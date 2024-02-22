#include <iostream>
#include <Windows.h>
using namespace std;

int perevod(int n)
{
    int x = 0;
    int i = 0;
    while (n > 0)
    {
        x = x + (n % 10 * pow(8, i));
        i++;
        n = n / 10;
    }
    cout << x << endl;
    return x;
}

void func(int n, ...)
{
    int *p = &n;

    for (int i = 2; i <= n * 2; i += 2)
    {
        perevod((p)[i]);
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    func(7, 5631, 71, 50244, 15612, 451, 631, 671323);
    return 0;
}
