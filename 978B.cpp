#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
	ll int n,c=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
    {
        if(i+2<=n-1)
        {
            if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
            {
            c++;
            }
        }
    }
    cout<<c;
}
