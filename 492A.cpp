#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll int n, i, x, crn;
    cin >> n;
    i=x=crn=0;
    while(n > 0)
    {
        i++;
        crn = x + i;
        x = crn;
        n -= crn;
        if (n < 0)
        {
            i--;
        }
    }
    cout << i;
}
