#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll int t,a,b,sum=0,f=0;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        sum = (a + f) - b;
        if(sum > 0)
            f = sum;
        else
            f = 0;
    }
    cout<<sum<<endl;
}
