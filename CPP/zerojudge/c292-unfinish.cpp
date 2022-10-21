#include <bits/stdc++.h>
using namespace std;

int ans() {
    int input[50][50];
    int n, path, count;
    int ans;
    cin >> n >> path;
    count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> input[i][j];
        }
    }

    while (count != n * n - 1) {
        switch (path%3)
        {
        case 1:
            /* code */
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
        }
    }

    return ans;
}

/*
    0 -> [i--][j] LEFT
    1 -> [i][j--] UP
    2 -> [i++][j] RIGHT
    3 -> [j][j++] DOWN
*/

int main() {
    cout << ans() << '\n';
}