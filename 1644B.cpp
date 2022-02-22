#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int n;
        cin>>n;
        for(ll int i=1; i<=n; i++)
        {
            cout<<i<<" ";
            for(ll int j=n; j>=1; j--)
            {
                if(j!=i)
                {
                    cout<<j<<" ";
                }
            }
            cout<<endl;
        }
    }
}
