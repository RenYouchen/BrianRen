#include <bits/stdc++.h>
using namespace std;

char in[50][50];
int n, m;
char temp;

void s() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {  // cin
        for (int j = 0; j < m; j++) {
            cin >> in[i][j];
        }
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (in[i][j] == '*') {
                for (int rep = i; rep < n; rep++) {
                    if (in[rep][j] == 'o') {
                        break;
                    }else if (in[rep][j] == '.'){
                        temp = in[rep][j];
                        in[rep][j] = in[i][j];
                        in[i][j] = temp;
                    }
                }
            }
        }
    }
    cout << '\n' << '\n';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << in[i][j];
        }
        cout << '\n';
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        s();
    }
}
/*
1
6 10
.*.*....*.
.*.......*
...o....o.
.*.*....*.
..........
.o......o*
*/