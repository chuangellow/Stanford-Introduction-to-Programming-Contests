#include <iostream>
#include <string>

using namespace std;

int get_sortedness(string s) {
	int sortedness = 0;
	for (int i = 0; i < s.length(); i++) {
		for (int j = i + 1; j < s.length(); j++) {
			if (s[i] > s[j]) {
				sortedness++;
			}
		}
	}
	return sortedness;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	string s[m];
	int sortedness[m];
	for (int i = 0; i < m; i++) {
		cin >> s[i];
		sortedness[i] = get_sortedness(s[i]);
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m - 1; j++) {
			if (sortedness[j] > sortedness[j + 1]) {
				swap(sortedness[j], sortedness[j + 1]);
				swap(s[j], s[j + 1]);
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << s[i] << endl;
	}
	return 0;
}
