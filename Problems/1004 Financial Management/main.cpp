#include <iostream>

using namespace std;

int main(void) {
	long long int count = 0;
	double n;
	double sum = 0;
	for (int i = 0; i < 12; i++) {
		cin >> n;
		if (n > 0) {
			sum += n;
			count++;
		}
	}
	cout << "$" << sum / count << endl;
	return 0;
}
