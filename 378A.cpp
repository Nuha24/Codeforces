#include<bits/stdc++.h>
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll int a, b, m(0), q(0), t(0);
    cin >> a >> b;
    for(ll int i = 1; i <= 6; i++)
        if(abs(b - i) < abs(a - i))
        {
            q++;
        }
        else if(abs(a - i) < abs(b - i))
        {
            m++;
        }
        else
        {
            t++;
        }
    cout << m << " " << t << " " << q;
}
