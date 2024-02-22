#include <iostream>
#include <cmath>
using namespace std;

int func(int x, int y)
{
    return pow(x, y);
}
double func(double x, double y)
{
    return pow(x, 1 / y);
}
int main()
{
    cout << func(2, 4) << endl;
    cout << func(16.0, 3.0) << endl;

    return 0;
}