#include <iostream>
using namespace std;

int main() {

	int N, M;
	cin >> N >> M;

	int arr[101];
	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}
	int temp;
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
	}
	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}


	return 0;
}