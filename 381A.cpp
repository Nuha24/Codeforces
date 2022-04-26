#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll int n;
    while(cin>>n)
    {
        ll int a[n];
        for(ll int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        ll int beg=1,endi=n,i=1,s=0,d=0;
        while(beg<=endi)
        {
            if(i%2==1)
            {
                if(a[beg]>=a[endi])
                    s+=a[beg++];
                else
                    s+=a[endi--];
            }
            else
            {
                if(a[beg]>=a[endi])
                    d+=a[beg++];
                else
                    d+=a[endi--];
            }
            i++;
        }
        cout<<s<<" "<<d;
        break;
    }
}
