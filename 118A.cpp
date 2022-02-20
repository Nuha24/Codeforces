#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i,l;
    l= s.size();
    for (i=0; i<l; i++)
    {
        char x=tolower(s[i]);
        if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='y')
            continue;

        else
        {
            cout<<"."<<x;
        }
    }
}

