#include <iostream>
#include <clocale>
#include <Windows.h>
using namespace std;
void H(int n, int s, int f) {
	int t;
	if (n == 1) {
		cout << s << "=>" << f << endl;
	}
	else {
		t = 6 - s - f;
		H(n - 1, s, t);
		cout << s << "=>" << f << endl;
		H(n - 1, t, f);
	}

}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	cout << " Enter the number of disks:  ";
	cin >> n;
	H(n, 1, 3);
	return 0;
}
