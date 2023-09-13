#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s[4];
	int count[26] = {0};
	for (int i = 0; i < 4; i++) {
		getline(cin, s[i]);
		for (int j = 0; j < s[i].length(); j++) {
			char c = s[i][j];
			if (c >= 'A' && c <= 'Z') {
				count[c - 'A']++;
			}
		}
	}
	int max = -1;
	for (int i = 0; i < 26; i++) {
		if (count[i] > max) {
			max = count[i];
		}
	}
	for (int i = max; i > 0; i--) {
		for (int j = 0; j < 26; j++) {
			if (count[j] >= i) {
				cout << "* ";
			} else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	for (int j = 0; j < 26; j++) {
		cout << (char)('A' + j) << (j == 25 ? "\n" : " ");
	}
}
