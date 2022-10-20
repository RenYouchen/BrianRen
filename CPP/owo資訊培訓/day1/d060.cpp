#include <bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin >> m;
    cout << (m<25)*(25-m)+(m>25)*(60-m+25);
}
