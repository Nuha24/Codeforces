#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=0;
        cin>>n;
        int a[n];
        for( i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int sum = a[0]|a[1];
        for (int i = 1; i < n; i++)
        {
            sum = sum | a[i];
        }
        cout<<sum<<endl;
    }

}

