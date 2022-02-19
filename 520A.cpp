#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0; i<n; i++)
    {
        a[i]=toupper(a[i]);
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++)
    {
        if(a[i]!=a[i+1])
        {
            c++;
        }
    }
    if(c==26)
        cout<<"YES";
    else
        cout<<"NO";
}
