#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    char s[100000];
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        int len=strlen(s);

        if(len>10)
            cout<<s[0]<<len-2<<s[len-1]<<endl;
        else
            cout<<s<<endl;
    }
}
