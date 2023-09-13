#include <iostream>

bool check_consecutive_sum(long long int start, long long int n) {
	long long int sum = 0;
	for (long long int i = start; i < n; i++) {
		sum += i;
		if (sum == n) {
			return true;
		}
		else if (sum > n) {
			return false;
		}
	}
	return false;
}

int main(void) {
	long long int n;
	std::cin >> n;
	int sum = 0;
	for (long long int i = 1; i < n; i++) {
		if (check_consecutive_sum(i, n)) {
			sum++;
		}
	}
	sum++;
	std::cout << sum << std::endl;
	return 0;
}
