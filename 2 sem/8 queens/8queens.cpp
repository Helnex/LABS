#include <iostream>
using namespace std;

int board[8][8];

int check(int c, int r) // Проверка, что можно ставить в клетку [r][c]
{
    for (int i = 0; i < c; ++i)
    {
        // Проверка горизонтали
        if (board[i][r])
            return 0;
        // Проверка диагонали
        if (r - c + i >= 0)
            if (board[i][r - c + i])
                return 0;
        if (r + c - i < 8)
            if (board[i][r + c - i])
                return 0;
    }
    return 1;
}

int vert(int i) // Установка i-й вертикали
{
    if (i == 8)
        return 1;               // Фигуры расставлены, алгоритм завершен
    for (int j = 0; j < 8; ++j) // Поиск места по ввертикали
        if (check(i, j))        // Если можно -
        {
            board[i][j] = 1; // Фигура устанавливается
            if (vert(i + 1))
                return 1;    // Получилось поставить
            board[i][j] = 0; // Не получилось - удаление ферзя
        }
    return 0;
}

int main()
{
    vert(0);

    // Вывод результата
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (board[i][j])
                cout << '#';
            else
                cout << '.';
        }
        cout << endl;
    }

    return 0;
}
