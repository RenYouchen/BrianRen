// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;          // have
//     int count = 0;  // drink
//     while (cin >> n) {
//         count = 0;
//         while (n >= 3) {
//             count += n;
//             n = n / 3 + n % 3;
//         }
//         if (n == 2) count++;
//         cout << count << '\n';
//     }
// }

#include<stdio.h>

int main(){

    int Coke;
    int Coke_sum;
    int Coke_empty;

    while(scanf("%d", &Coke) != EOF){

        Coke_sum = Coke;
        Coke_empty = Coke;

        while(Coke_empty >= 3){
            Coke_sum = Coke_sum + (Coke_empty / 3);
            Coke_empty = (Coke_empty / 3) + (Coke_empty % 3);
        }

        printf("%d\n", Coke_sum + Coke_empty / 2);
    }

    return 0;
}