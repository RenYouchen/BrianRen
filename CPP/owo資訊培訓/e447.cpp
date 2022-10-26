#include <bits/stdc++.h>
using namespace std;

queue<int> q;

void ans() {
    int k, temp;
    cin >> k;
    if (k == 1) {
        cin >> temp;
        q.push(temp);
    } else if (k == 2) {
        if (q.empty()) {
            cout << "-1" << endl;
        } else {
            cout << q.front() << endl;
        }
    } else if (k == 3) {
        if (q.empty()){
        }else{
            q.pop();
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ans();
    }
}