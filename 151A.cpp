#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll int n,k,l,c,d,p,nl,np,x,t,z,q;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    x= l*k / nl;
    t= c * d;
    z= min(x , t);
    q= p / np;
    cout << min(z,q)/n;
}
