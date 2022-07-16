#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll n,a[]={100,20,10,5,1};
    cin>>n;
    ll s=0;
    for(int i=0; i<5; i++)
    {
        s+=n/a[i];
        n=n%a[i];
    }
    cout<<s;
}
