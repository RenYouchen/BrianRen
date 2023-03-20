#include <iostream>
using namespace std;

int n;
int F[10000];
int a,b;
int c = 2;

int f(int fb) {
	while (F[c-1] <= 3) {
		F[c] = F[c-1] + F[c-2];
		//cout << F[i] << '\n';
		c++;
	}
	return 0;
}

int main() {
	
	F[0] = 0;
	F[1] = 1;

	cin >> n;
	while (n--) {
		cin >> a >> b;
		f(b);
		for (int i = 0; F[i] <= b; i++) {
			//if (a > F[i]) {
				cout << F[i] << '\n';
			//}
		}
	}

	return 0;
}
