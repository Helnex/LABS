#include <iostream>
#include <cmath>
using namespace std;
const double epsilon = pow(10, -6);

double f(double x)
{
    return 3 * x - 4 * log(x) - 5;
}

int main()
{
    double a, b, x;
    a = 2;
    b = 4;

    while (abs(b - a) > epsilon)
    {
        x = (a + b) / 2;
        if (f(b) * f(x) < 0)
        {
            a = x;
        }
        else
        {
            b = x;
        }
    }

    cout << (a + b) / 2;
    return 0;
}
