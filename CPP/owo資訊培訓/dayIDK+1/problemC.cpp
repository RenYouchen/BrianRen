#include <bits/stdc++.h>
using namespace std;

bool fuckThat;
char ans()
{
    char a[8][8];

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        char pre = ' ';
        if (fuckThat)
        {
            for (int j = 0; j < 8; j++)
            {
                if (pre == ' ')
                {
                    pre = a[i][j];
                }
                else if (pre != a[i][j])
                {
                    fuckThat = 0;
                    break;
                }

                if (j == 7 && pre != '.')
                {
                    return 'R';
                    fuckThat = false;
                    break;
                }
            }
        }
    }
    return 'B';
}

int main()
{
    int n;
    cin >> n;
    char a[5000];
    for (int i = 0; i < n; i++)
    {
        fuckThat = true;
        a[i] = ans();
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << '\n';
    }
}

