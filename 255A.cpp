#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll int n,chest=0,bicep=0,bc=0;;
    cin>>n;
    ll int g[n];
    for(ll int i=0; i<n; i++)
    {
        cin>>g[i];
    }
    for(ll int i=0; i<n; i++)
    {

        if(i%3==1)
        {
            bicep+=g[i];
        }
        else if(i%3==0)
        {
            chest+=g[i];
        }
        else
        {
            bc+=g[i];
        }
    }
    if(bicep>chest && bicep>bc)
    {
        cout<<"biceps"<<endl;
    }
    else if(chest>bicep && chest>bc)
    {
        cout<<"chest"<<endl;
    }
    else
    {
        cout<<"back"<<endl;
    }
}
