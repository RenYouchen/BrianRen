#include <bits/stdc++.h>
using namespace std;
int ans[10000000];
int main()
{
    int n;
    
    while (cin >> n) {
        
    int count = 0;
   
        for (int i = 0; i < n; i++)
        {
            if (i % 7 != 0)
            {
                ans[count] = i;
                count++;
            }
        }
        n = 0;

        for (int i = 0; i < count; i++)
        {
            if (i != (count - 1))
            {
                printf("%d ", ans[i]);
            }
            else
            {
                printf("%d", ans[i]);
                count = 0;
            }
        }cout<<endl;
    }

}