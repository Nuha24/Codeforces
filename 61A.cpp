#include<bits/stdc++.h>
#define ll long long int
#define fatread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    string s,a,c;
    cin>>s>>a;
    ll l=s.length();
    for(int i=0; i<l; i++)
    {
        if(s[i]!=a[i])
            c+='1';
        else
        {
            c+='0';
        }
    }
    cout<<c;
}
