#include <bits/stdc++.h>
using namespace std;

string input;
int A = 0, B = 0;

int ans() {
    cin >> input;
    for (int i = 0; i < input.size(); i += 2) {
        A += input[i] - '0';
        if (i + 1 < input.size())
            B += input[i + 1] - '0';
    }

    if (A > B) {
        return A - B;
    } else {
        return B - A;
    }
}

int main() {
    cout << ans() << '\n';
}