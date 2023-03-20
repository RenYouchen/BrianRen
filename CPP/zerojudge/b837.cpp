#include <iostream>
using namespace std;

int n;
int F[10000];
int a,b;
int c = 2;

int f() {
	while (F[c-1] <= b) {
		F[c] = F[c-1] + F[c-2];
		//cout << F[i] << '\n';
		c++;
	}
	return 0;
}

int main() {
	
	F[0] = 0;
	F[1] = 1;
	int count;

	cin >> n;
	while (n--) {
		count = 0;
		cin >> a >> b;
		
		if (a > b) swap(a,b);
		f();

		for (int i = 0; F[i] <= b; i++) {
			if (a <= F[i]) {
				cout << F[i] << '\n';
				count++;
			}
		}
		cout << count << '\n';
		if (n) cout << "------" << '\n';
	}

	return 0;
}
