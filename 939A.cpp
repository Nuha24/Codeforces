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
    for(int i=1; i<=n ; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(a[a[a[i]]]==i)
        {
            count++;
        }
    }
    if(count)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
