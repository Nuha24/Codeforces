#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int a,b,s;
    cin>>a>>b;
    if(a>b)
    cout<<b<<" ";
    else
    cout<<a<<" ";
    s = abs(a-b);
    cout<<s/2;
}
