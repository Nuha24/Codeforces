#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll int n,s,d,f=0;
    cin>>n>>s;
    while(n--)
    {
     char c;
     cin>>c>>d;
     if (c == '+') {
            s += d;
        } else if (d <= s) {
            s -= d;
        } else {
            f++;
        }
    }
    cout << s << " " << f;
}
