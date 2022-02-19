#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll int k,l,m,n,d,c=0;

    while(cin>>k>>l>>m>>n>>d)
    {
        int c=0;
        for(int i=1; i<=d; i++)
        {
            if(i%k==0||i%l==0||i%m==0||i%n==0)
                c++;
        }
        cout<<c<<endl;
    }
}
