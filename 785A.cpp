#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    while(cin>>n)
    {
       int add = 0;
        while (n--)
        {
            cin >> s;
            if (s == "Tetrahedron")
                add += 4;
            else if (s == "Cube")
                add += 6;
            else if (s == "Octahedron")
                add += 8;
            else if (s == "Dodecahedron")
                add += 12;
            else if (s == "Icosahedron")
                add += 20;
        }
        cout << add << endl;
    }
    return 0;
}
