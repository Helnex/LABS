#include <iostream>
#include <cmath>
using namespace std;

double sum(int x)
{
    int n;
    double s = 0;
    cout << "Введите n: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        s = s + pow(-1, i + 1) * pow(x, 2 * i + 1) / (4 * pow(i, 2) - 1);
    }
    return s;
}

int main()
{
    cout << sum(2);

    return 0;
}
