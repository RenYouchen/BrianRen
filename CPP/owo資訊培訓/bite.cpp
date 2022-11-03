#include <bits/stdc++.h>
using namespace std;

//(a+b) >> 1 (二分搜？加速)

int andO(int n){ //可用於判斷奇偶數 0 = 偶 1 = 奇
    cout << hex << (n & 1) << '\n';
}

int main(){
    andO(10);
}
