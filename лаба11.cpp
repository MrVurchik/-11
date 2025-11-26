#include <iostream>
#include <time.h>
using namespace std;
int fibonacci(int n) {
	if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

void suma() {
	int a, b;
	cout << "Введіть перше число для додавання: ";
	cin >> a;
	cout << "Введіть друге число для додавання: ";
	cin >> b;
	int d;
	d = a + b;
	cout << "Сума цифр:" << d << endl;
}
void simpleNum() {
	int a;
	cout << endl;
	cout << "Ведіть число:";
	cin >> a;
	bool f = true;

	if (a <= 1) {
		cout << "Число а не є простим" << endl; return;
	}
	else if (a == 2) {
		cout << "Число а є простим" << endl; return;
	}
	else if (a % 2 == 0) {
		cout << "Число а не є простим"<< endl; return;
	}
	for (int i = 3; i * i <= a; i += 2) {
		if (a % i == 0) {
			f = false;
			break;

		}
	}
	if (f)
		cout << "Число a є простим";
	else
		cout << "Число a не є простим";	
	cout << endl;

}
void factorial() {
	int a;
	int d = 1;
	cout << endl;
	cout << "Введіть число: ";
	cin >> a;
	for (int i = 1; i <= a; i++) {
		d *= i;
	}
	cout << "Факторіал:" << d << endl;
}
void analyzeMatrix() {
	int d;
	int min = 20; int max = 0; int summa = 0;
	srand(time(NULL));
	int num[5][5];
	cout << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			num[i][j] = 1 + rand() % 20;
			summa += num[i][j];
			if (num[i][j] < min) { min = num[i][j]; }
				if (num[i][j] > max) {max = num[i][j];}
				cout << num[i][j] << "\t";
			}
		cout << endl;
	}int b = sizeof(num) / sizeof(num[0][0]);
	d = summa / b;
	cout << "Середнє арифметичне" << d << endl;
	cout << "Найменше число:" << min << endl;
	cout << "Найбіше число:" << max;}
void Fibonacci() {
	int n;
	cout << endl;
	cout << "Введіть номер елемента Фібоначчі: ";
	cin >> n;

	int result = fibonacci(n);
	cout << "Число Фібоначчі під номером " << n << " дорівнює: " << result << endl;
}

int main() {
	setlocale(LC_ALL, "RU");
	suma();
	simpleNum();
	factorial();
	analyzeMatrix();
	Fibonacci();
	return 0;
}
