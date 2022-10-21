#include <bits/stdc++.h>
using namespace std;

int ans() {
    int n, count;
    int inGroup[50000];
    int temp;
    int input[50000];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> input[i];
    }
    for (int i = 0; i < n; i++){
        if (inGroup[i]){
            continue;
        }
        inGroup[i] = 1;
        int tempI = i;
        while (i != input[tempI]){
            tempI = input[tempI];
            inGroup[tempI] = 1;
        }
        count++;
    }
    return count;
}

int main() {
    cout << ans() << '\n';
}