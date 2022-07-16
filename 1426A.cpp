#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int n,x;
        cin>>n>>x;
        int k=2,i= 1;
        while(k < n){
            k += x;
            i++;
        }
        cout<<i<<endl;
    }
}
