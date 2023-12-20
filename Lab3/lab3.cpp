// #include <cmath>
// #include <iostream>
// using namespace std;
// const double epsilon = pow(10, -6);

// double f(double x)
// {
//     return 3 * x - 4 * log(x) - 5;
// }

// int main()
// {
//     double a, b, x;
//     a = 2;
//     b = 4;

//     while (abs(b - a) > epsilon)
//     {
//         x = (a + b) / 2;
//         if (f(b) * f(x) < 0)
//         {
//             a = x;
//         }
//         else
//         {
//             b = x;
//         }
//     }

//     cout << (a + b) / 2;
//     return 0;
// }

// #include <cmath>
// #include <iostream>
// using namespace std;

// double f(double x)
// {
//     return 3 * x - 4 * log(x) - 5;
// }
// double f1(double x)
// {
//     return 3 - 4 / x;
// }
// double f2(double x)
// {
//     return 4 / pow(x, 2);
// }

// int main()
// {
//     setlocale(LC_ALL, "Rus");
//     double a, b, epsilon, x;
//     int iterator = 0;
//     int k;
//     a = 2;
//     b = 4;
//     epsilon = pow(10, -6);

//     if (f(a) * f2(a) > 0)
//     {
//         cout << "Условие на сходимость выполнено для x = a = " << a << endl;
//         x = a;
//     }
//     else
//     {
//         if (f(b) * f2(b) > 0)
//         {
//             cout << "Условие на сходимость выполнено для x = b = " << b << endl;
//             x = b;
//         }
//         else
//         {
//             cout << "Условие на сходимость не выполнено";
//             x = -10E10;
//         }
//     }

//     if (x > -10E10)
//     {
//         k = 0;
//         while (fabs(f(x)) > epsilon)
//         {
//             x = x - f(x) / f1(x);
//             k += 1;
//         }
//         cout << "Корень x = " << x << endl;
//         cout << "Количество итераций: " << k << endl;
//     }
//     return 0;
// }

// #include <cmath>
// #include <iostream>
// using namespace std;

// const double epsilon = pow(10, -6);

// double f(double x) {
//     return 3*x - 4 * log(x) - 5;
// }
// double u(double x) {
//     return (5+4*log(x)) / 3;
// }
// double u1 (double x) {
//     return 4/(3*x);
// }

// int main()  {
//     setlocale(LC_ALL, "Rus");
//     double a=2,b=4, x;
//     x = (a+b) / 2;
//     if (abs(u1(x)) < 1) {
//         while (abs(f(x)) > epsilon){
//             x = u(x);
//         }
//         cout<<"Корень x = "<<x<<endl;
//     } else {
//         cout <<"Условие сходимости не выполнено"<<endl;
//     }
//     return 0;
// }
