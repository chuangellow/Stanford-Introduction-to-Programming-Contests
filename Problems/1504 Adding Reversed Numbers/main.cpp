#include <iostream>

using namespace std;

long long int get_reversed_num(long long int num) {
	long long int reversed_num = 0;
	while (num > 0) {
		reversed_num = reversed_num * 10 + num % 10;
		num /= 10;
	}
	return reversed_num;
}

int main(void) {
	int n;
	cin >> n;
	long long int num1, num2;
	for (int i = 0; i < n; i++) {
		cin >> num1 >> num2;
		cout << get_reversed_num(get_reversed_num(num1) + get_reversed_num(num2)) << endl;
	}
	return 0;
}
