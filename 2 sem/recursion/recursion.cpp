#include <iostream>
#include <cmath>
using namespace std;

double s = 0;
double sum(int x, int n)
{
    s = s + pow(-1, n + 1) * pow(x, 2 * n + 1) / (4 * pow(n, 2) - 1);
    if (n > 1)
    {
        sum(2, n - 1);
    }
    return s;
}

int main()
{
    int n;

    cout << "Введите n: ";
    cin >> n;
    cout << sum(2, n);

    return 0;
}