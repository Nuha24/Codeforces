#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int n;
    cin >> n;
    int c = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            c += 1;
        }
        n /= 10;
    }
    if (c == 4 || c == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
