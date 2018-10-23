#include <iostream>
#include <conio.h>
#include <limits>

using namespace std;
unsigned long long num;
bool ex4;
bool ex2;

void step() {
	if (num % 2) {
		num *= 3; num++;
	}
	else {
		num /= 2;
	}

	cout << " -> " << num;
	if (num == 4) {
		ex4 = true;
		step();
	}
	if (num == 2) {
		ex2 = true;
		step();
	}

	if (!ex4 && !ex2)
		step();
}

int main() {
	while (true) {
		cout << endl << endl;
		cin >> num;
		if (cin.fail()) {
			cout << "number is too long";
			return 1;
		}
		ex4 = false;
		ex2 = false;

		system("cls");
		cout << num;
		step();
	}
	return 0;
}