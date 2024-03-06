#include <Windows.h>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ofstream f2("f2.txt");

    int n1, n2;
    cout << "Enter N1 and N2: ";
    cin >> n1 >> n2;

    string f1_text;
    ifstream f1("f1.txt");

    int i = 1;
    int maxk = 0;
    int maxi = 0;

    while (getline(f1, f1_text))
    {
        int localk = 0;
        if (f1_text[size(f1_text) - 1] == 'A')
        {
            if (n1 < i && i < n2)
            {
                f2 << f1_text << endl;
                for (int j = 0; j < size(f1_text); ++j)
                {
                    if (f1_text[j] == 'A')
                    {
                        localk += 1;
                        if (localk > maxk)
                        {
                            maxi = i;
                            maxk = localk;
                        }
                    }
                }
            }
        }
        i += 1;
    }

    cout << endl
         << "max number = " << maxi << endl;

    f1.close();
    f2.close();
    return 0;
}