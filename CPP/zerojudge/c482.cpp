#include <iostream>
#include <climits>
using namespace std;

int n, q;
int a, b, c, d;
long count[10];
int in[2000][2000];

int main() {
	while (1){
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> in[i][j];
			}
		}
		cin >> q;
		while (q--) {
			cin >> a >> b >> c >> d;
			for (int i = 0;i < 10; i++) count[i] = 0;
			int half = (b-a+1)*(d-c+1)/2;
			for (int i = a; i <= b; i++) {
				for (int j = c; j <= d; j++) {
					//cout << in[i][j] << ' ';
					count[in[i][j]]++;
				}
				//cout << '\n';
			}
			for (int i = 0;i <= 10; i++) {
				if (i == 10) {
					cout << -1 << '\n';
					break;
				}
				if (count[i] > half) {
					cout << i << '\n';
					break;
				}
			} 
		}
	}
	return 0;
}
