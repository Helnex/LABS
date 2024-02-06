#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    while ((n % 2 == 0) || (n < 3))
    {
        cout << "Введите основание  равнобедренного треугольника: ";
        cin >> n;
    }
    int p = (n - 1) / 2;
    int z = 1;
    for (int s = 1; s <= n / 2 + 1; ++s)
    {
        for (int i = 1; i <= p; ++i)
            cout << ' ';
        for (int i = 1; i <= z; ++i)
            cout << '*';
        cout << endl;
        p = p - 1;
        z = z + 2;
    }
    return 0;
}
