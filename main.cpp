#include<iostream>

using namespace std;

int main() {
	int y, k, n;
	cin >> y >> k >> n;

	n -= y; // limit on x
	int r = k - (y % k);

	if (n < r) { cout << -1; return 0; }
	for (int i = 0; i <= (n - r) / k; i++) {
		cout << i * k + r << ' ';
	}
}
