#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll int n,count=0;
    cin>>n;
    ll int a[n];
    for(ll int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll int i=0; i<n; i++)
    {
        for(ll int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                a[i]=0;
            }
        }
    }
    for(ll int i=0; i<n; i++)
    {
        if(a[i]>0)
            count++;
    }
    cout<<count<<endl;
    for(ll int i=0; i<n; i++)
    {
        if(a[i]>0)
            cout<< a[i]<<" ";
    }
}

