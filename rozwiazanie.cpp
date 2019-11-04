#include <iostream>

using namespace std;
const int MAX = 16;

int main() {
	int t[MAX][MAX] = {};
	int ldw = MAX * MAX; //liczba do wpisania
	int irw = MAX; //ile razy wpisac
	int p = 0; //przypadek (1z4)
	int i = 0, j = 0;
	while (ldw > 0 && irw > 0) {
		p++;
		switch (p % 4) {
		case 1: //w prawo
			for (int k = 0; k < irw; j++, k++) {
				t[i][j] = ldw;
				ldw--;
			}
			j--;i++;irw--;
			break;
		case 2: //w dół
			for (int k = 0; k < irw; i++, k++) {
				t[i][j] = ldw;
				ldw--;
			}
			i--;j--;
			break;
		case 3: //w lewo
			for (int k = 0; k < irw; j--, k++) {
				t[i][j] = ldw;
				ldw--;
			}
			j++;i--;irw--;
			break;
		case 0: //w górę
			for (int k = 0; k < irw; i--, k++) {
				t[i][j] = ldw;
				ldw--;
			}
			i++;j++;
			break;
		}
	}
	for (int i = 0; i < MAX; i++) {
		cout << "\n\n\n";
		for (int j = 0; j < MAX; j++) {
			cout << "\t" << t[i][j];
		}
	}
	cout << "\n\n\n";
	return 0;
}
