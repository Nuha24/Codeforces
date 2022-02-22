#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.length();
        bool r=false,g=false,b=false;
        bool flag = true;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='r' )
            {
                r=true;
            }
            if(s[i]=='R' )
            {
                if(r==false)
                {
                    flag=false;
                }
            }
            if(s[i]=='g' )
            {
                g=true;
            }
            if(s[i]=='G' )
            {
                if(g==false)
                {
                    flag=false;
                }
            }
            if(s[i]=='b' )
            {
                b=true;
            }
            if(s[i]=='B' )
            {
                if(b==false)
                {
                    flag=false;
                }
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
