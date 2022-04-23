#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout<< "2 1";
        for (int i = 3; i < n; i += 2)
        {
        cout <<" "<< i + 1 <<" "<< i;
        }
        cout << endl;
    }
}
