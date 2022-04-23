#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll a,b,s,l=1;
    cin>>a>>b;
    s=min(a,b);
    while(s>0)
    {
        l*=s;
        s--;
    }

    cout<<l;
}
