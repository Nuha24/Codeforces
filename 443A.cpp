#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int len=s.size();
    sort(s.begin(),s.end());
    int c=0;
    for(int i=0; i<len-1; i++)
    {
        if( s[i]==' ' || s[i]=='{}' || s[i]==',' )
            {
                continue;
            }
            else
            {
                if(s[i]!=s[i+1])
                {
                    c++;
                }
            }
    }
    cout<<c-1;
}
