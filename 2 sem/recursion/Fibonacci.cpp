#include <iostream>
#include <cmath>
using namespace std;

int f(int n)
{
    if (n == 1 || n == 2)
        return 1;
    if (n == 0)
        return 0;
    return f(n - 1) + f(n - 2);
}
int main()
{
    cout << f(4) << endl;
    return 0;
}
