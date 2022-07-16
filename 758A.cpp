#include<bits/stdc++.h>
#define ll long long int
#define fatread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],sum=0,f=0;
    for(ll i=0;i<n;i++)
    {
    cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];
    }
    f=a[n-1]*n-sum;
    cout<<f<<endl;
}
