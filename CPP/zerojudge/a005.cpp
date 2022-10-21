#include <bits/stdc++.h>
using namespace std;

int ans() {
    int n;
    int input[20][4];

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> input[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        if (input[i][0] - input[i][1] == input[i][1] - input[i][2]) {
            for (int j = 0; j < 4; j++) {
                cout << input[i][j] << ' ';
            }
            cout << (input[i][1] - input[i][0]) + input[i][3] << '\n';
        }else{
            for (int j = 0; j < 4; j++) {
                cout << input[i][j] << ' ';
            }
            cout << (input[i][1] / input[i][0]) * input[i][3] << '\n';
        }
    }
}

int main() {
    cout << ans() << '\n';
}