#include <iostream>
#include <vector>

using namespace std;

void print_matrix(vector<vector<int> > matrix, int u) {
	for (int i = 0; i < 2*u+1; i++) {
		for (int j = 0; j < 2*u+1; j++) {
			cout << matrix.at(i).at(j);
		}
		cout << endl;
	}
	return;
}

vector<vector<int> > set_matrix(int u, int slice) {
    int size = 2 * u + 1;
    vector<vector<int> > matrix(size, vector<int>(size, -1));
    
    int center = u;
    int z = slice - 1;
    
    for (int x = 0; x < size; ++x) {
        for (int y = 0; y < size; ++y) {
            int petrol_needed = abs(center - x) + abs(center - y) + abs(center - z);
            if (petrol_needed <= u) {
                matrix[x][y] = petrol_needed;
            }
        }
    }
    
    return matrix;
}

int main(void) {
	long long int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		long long int u;
		cin >> u;
		cout << "Scenario #" << i + 1 << ":" << endl;
		for (int j = 1; j <= 2*u+1; j++) {
			cout << "slice #" << j << ":" << endl;
			vector<vector<int> > matrix = set_matrix(u, j);
			for (int a = 0; a < 2*u+1; a++) {
				for (int b = 0; b < 2*u+1; b++) {
					if (matrix.at(a).at(b) == -1) {
						cout << ".";
					}
					else {
						cout << matrix.at(a).at(b);
					}
				}
				cout << endl;
			}
		}
	}
	return 0;
}
