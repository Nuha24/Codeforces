#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int sum = 0, c = 0;
        for(int i=1; i<=n; i++)
        {
            sum +=5*i;
            if (sum > 240-k)
            break;
            c = c + 1;
        }
        cout<<c<<endl;
        return 0;
    }
}

