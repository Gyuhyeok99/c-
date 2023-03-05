#include <iostream>
using namespace std;

int main() {
	int N, X;
	cin >> N >> X;
	int* p = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> p[i];
	}
	for (int i = 0; i < N; i++) {
		if (p[i] < X) {
			cout << p[i] << " ";
		}
	}
	return 0;
}