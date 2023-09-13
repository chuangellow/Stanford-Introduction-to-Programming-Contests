#include <iostream>

using namespace std;

double get_card_length(int n) {
	double card_length = 0;
	for (int i = 2; i <= n+1; i++) {
		card_length += 1.0 / i;
	}
	return card_length;
}

int main(void) {
	double n;
	while (cin >> n && n != 0.00) {
		int card_num = 0;
		double card_length = 0;
		while (card_length < n) {
			card_num++;
			card_length = get_card_length(card_num);
		}
		cout << card_num << " card(s)" << endl;
	}
	return 0;
}
