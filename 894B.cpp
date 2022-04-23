#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    string s ;
    cin>>s;
    ll int count=0,len;
    len= s.size();
    for(ll int i=0; i<len; i++)
    for(ll int j=i+1; j<len; j++)
    for(ll int k=j+1; k<len; k++)
    if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')
    {
    count++;
    }
    cout<<count;
}
