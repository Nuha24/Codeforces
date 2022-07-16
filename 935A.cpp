#include<bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    ll n,f=0;
    while(cin>>n)
    {
        for(ll i=1;i<n;i++)
        {
            if(n%i==0)
                f++;
        }
        cout<<f;
        break;
    }
}
