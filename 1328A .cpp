#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll int t;
    cin>>t;
    while(t--)
    {
        ll int a,b;
        cin>>a>>b;
        if(a%b==0)
            cout<<"0"<<endl;
        else
            cout<<b-(a%b)<<endl;
    }
}
