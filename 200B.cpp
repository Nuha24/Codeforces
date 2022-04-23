#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll int n,a[110];
    cin>>n;
    double p=0.0,s=0.0;
    for(ll int i=0; i<n; i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    p=s/n;
    cout<<fixed<<setprecision(12)<<p;
}
