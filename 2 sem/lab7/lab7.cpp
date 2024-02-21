// #include <iostream>
// #include <cmath>
// using namespace std;

// // 15. 	Написать функцию с переменным числом параметров для пе-ревода чисел из восьмеричной  системы счисления в деся-тичную. Написать вызывающую
// int func(int k, ...)
// {
//     int *p = &k; // настроили указатель на параметр k
//     cout << *p << endl;
//     p = p + 2;
//     cout << *p << endl;
//     int s = 0;

//     for (; k > 0; k--)
//     {
//         s = s + *(p++);
//     }
//     cout << s;

//     return s;
// }
// int perevod(int n)
// {
//     int x = 0;
//     int i = 0;
//     while (n > 0)
//     {
//         x = x + (n % 10 * pow(8, i));
//         i++;
//         n = n / 10;
//     }
//     return x;
// }

// int main()
// {
//     func(2, 4, 5);

//     return 0;
// }
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