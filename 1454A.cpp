#include<bits/stdc++.h>
#define ll long long int
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for(ll i = 2; i <= n; i++)
            cout << i << " ";
        cout << 1 << endl;
    }
}
