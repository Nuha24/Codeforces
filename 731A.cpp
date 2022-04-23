#include<bits/stdc++.h>
#define ll long long
#define fastread()   (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll int sum = 0,l = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
       int k = s[i] - 97;
       if (abs(k - l) < 13)
            sum += abs(k - l);
        else
            sum += 26 - abs(k - l);

       l = k;
    }
    cout << sum;
}
