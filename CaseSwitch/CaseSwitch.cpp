#include <iostream>
using namespace std;

int a, b;

void input()
{
	cout << "bilangan pertama = ";
	cin >> a;

	cout << "bilangan kedua = ";
	cin >> b;
}

int penjumlahan(int bil_1, int bil_2) {
	return bil_1 + bil_2;
}

int pengurangan(int bil_1, int bil_2) {
	return bil_1 - bil_2;
}

int pengkalian(int bil_1, int bil_2) {
	return bil_1 * bil_2;
}

int pembagian(int bil_1, int bil_2) {
	return bil_1 / bil_2;
}


