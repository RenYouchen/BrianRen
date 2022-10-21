#include <bits/stdc++.h>
using namespace std;

void ans() {
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
    int x = n/2,
        y = x;
    
    int stepCount = 0,
        step = 1;
    while (count != n * n ) {
        cout << input[y][x];
        stepCount++;
        if (path%4 == 0) x--;
        else if (path%4 == 1) y--;
        else if (path%4 == 2) x++;
        else y++;
        if (stepCount == step) path++;
        if (stepCount == step*2){
            stepCount = 0;
            path++;
            step++;
        }
        count++;
    }
}

/*
    0 -> [i--][j] LEFT
    1 -> [i][j--] UP
    2 -> [i++][j] RIGHT
    3 -> [j][j++] DOWN
*/

int main() {
    // cout << ans() << '\n';
    ans();
}