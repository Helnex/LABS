#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

void Print(char *str)
{
    char *begin = str; // начало текущего слова
    int counter = 0;   // счетчик цифр

    while (true)
    {
        // текущий символ - цифра
        if (*str >= '0' && *str <= '9')
        {
            counter++;
            str++;
            continue;
        }

        // текущий символ - конец слова
        if (*str == ' ' || *str == '\0')
        {
            // если в слове 1 цифра
            if (counter != 0)
            {
                // вывод слова в консоль
                while (begin < str)
                {
                    cout << *begin;
                    begin++;
                }
                cout << " ";
            }
            // Если конец строки - завершить поиcк
            if (*str == '\0')
                break;
            // Поиск следующего слова
            Print(++str);
            break;
        }

        // переход к следующему символу
        str++;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char str[256];
    cout << "Enter the text: ";
    cin.getline(str, 255);
    str[255] = '\0';
    Print(str);
    return 0;
}