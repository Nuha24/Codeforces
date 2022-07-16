#include<bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    ll n,m=0,k,d=0;
    cin>>n>>k;
    for(ll i=0; i<n; i++)
    {
        ll p;
        cin>>p;
        if(p + k <= 5)
        {
            d++;
        }
    }
    cout<<d/3;
}
