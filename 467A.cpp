#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,p,q,t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin>>p>>q;
        if(q-p>=2)
        {
        t++;
        }
    }
    cout<<t;
}
