#include <iostream>
using namespace std;

int n;
int F[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 
     6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269};
int a,b;

int main() {
	
	F[0] = 0;
	F[1] = 1;
	int count;

	cin >> n;
	while (n--) {
		count = 0;
		cin >> a >> b;
		
		if (a > b) swap(a,b);

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
