#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll int x,y,c,f=0;
    cin>>x>>y;
    for(int i=1+x; i<=y; i++)
    {
        c=0;
        for(int j=2; j<=(i/2)+1; j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            if(i==y)
            {
                cout<<"YES"<<endl;
                f=1;
                break;
            }
            else
            {
                cout<<"NO"<<endl;
                f=1;
                break;
            }
        }
    }
    if(!f)
    {
        cout<<"NO"<<endl;
    }
}
