#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    string s,t;
    cin>>s;
    ll int f=0;
    for(ll int i=0; i<5; i++)
    {
        cin>>t;
        if(s[0]==t[0] || s[1]==t[1])
        {
            f++;
        }
    }
    if(f>0)
        cout<<"YES";
    else
        cout<<"NO";
}
