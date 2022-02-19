#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,s,t;
    cin>>a>>b>>t;
    s = a + b;
    sort(t.begin(), t.end());
    sort(s.begin(), s.end());
    if(s==t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
