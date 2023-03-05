#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int arr[100];
	
	for (int i = 0; i <= N; i++) {
		arr[i] = 0;
	}
	for (int x = 0; x < M; x++) {
		int i, j, k;
		cin >> i >> j >> k;
		while (i <= j) {
			arr[i] = k;
			i++;
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}

	cout << "น้มุ" << endl;
}