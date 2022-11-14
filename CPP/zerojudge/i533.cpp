#include <bits/stdc++.h>
using namespace std;

int main (){
    int a,b;
    cin >> a >> b;
    if (a == 0 && b == 0){
        cout << "在中心";
    }else if(a == 0 && b != 0){
        cout << "x軸上";
    }else if(a != 0 && b == 0){
        cout << "y軸上";
    }else if(a > 0 && b > 0){
        cout << "1";
    }else if(a > 0 && b < 0){
        cout << "4";
    }else if(a < 0 && b < 0){
        cout << "3";
    }else if(a < 0 && b > 0){
        cout << "2";
    }
        
}