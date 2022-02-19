//CODEFORCES SHEET 5(A-O)

//A.
#include <bits/stdc++.h>
using namespace std;
int sum(int x,int y);
int main()
{
    int x,y,s=0;
    cin>>x>>y;
    s=sum(x,y);
    cout<<s<<endl;
}

int sum(int x,int y)
{
    return (x+y);
}
//B.
#include<bits/stdc++.h>
using namespace std;
void func(int n)
{
    int i;
    for(i=1; i<n; i++)
    {
        cout<<i<<" ";
    }
    cout<<n<<"";
}
int main()
{
    int n,a;
    cin>>n;
    func(n);
}

//C.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int bp(ll n)
{
    int a[100000],s[100000],m=0,p=1;
    while(n>0)
    {
        s[m]=n%2;
        n/=2;
        m++;
    }
    for(ll i=m-1,j=0; i>=0; i--,j++)
    {
        if(s[i]!=s[j])
        {
            p=0;
            break;
        }
    }
    return p;
}
int func(ll n)
{
    int f=1;
    if(n%2==0)
        f=0;
    else
    {
        if(bp(n))
            f=1;
        else
            f=0;
    }
    return f;
}
int main()
{
    ll n,x;
    cin>>n;
    x=func(n);
    if(x)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

//D.
#include<bits/stdc++.h>
using namespace std;
int prime(int);

int prime(int n)
{
    int f = 1;
    if(n==0 || n==1)
    {
        f = 0;
    }
    else
    {
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i == 0)
            {
                f = 0;
                break;
            }
        }
    }
    return f;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(prime(n))
            cout<< "YES" <<endl;
        else
            cout<< "NO" <<endl;
    }
}

//E.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<x<<" "<<y;
}

//F.
#include<bits/stdc++.h>
using namespace std;
void num(int x,int n);

void num(int x,int n)
{
    long long int s=0,m=1;
    for(int i=1; i<=n; i++)
    {
        m*=x;
        if(i%2==0)
            s+=m;
    }
    cout<<s<<endl;
}
int main()
{
    int x,n;
    cin>>x>>n;
    num(x,n);
}

//G.
#include <bits/stdc++.h>
using namespace std;
int a(int s[],int n)
{
    int min,max;
    min=max=s[0];
    for(int i=1; i<n; i++)
    {
        if(max<s[i])
            max=s[i];
        if(min>s[i])
            min=s[i];
    }
    cout<<min<<" "<<max;
}
int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    a(s,n);
}

//H.
#include<bits/stdc++.h>
using namespace std;
void fun(char c,int n )
{
    for(int i = 0; i<n; i++)
    {
        cout<<c<<" ";
    }
    cout<<endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        char c;
        cin>>c;
        fun(c, n);
    }
}

//I-
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int a[500][500];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    for(int i=1; i<=n; i++)
        swap(a[x][i],a[y][i]);
    for(int i=1; i<=n; i++)
        swap(a[i][x],a[i][y]);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


//J.
#include<bits/stdc++.h>
using namespace std;
double avg(double s[],int n)
{
    double sum=0,d;
    for(int i=0; i<n; i++)
    {
        sum+= s[i];
    }
    d=sum/double(n);
    return d;
}
int main()
{
    int n;
    cin>>n;
    double a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<fixed<<setprecision(7);
    cout<<avg(a,n)<<endl;
}

//K.
#include<bits/stdc++.h>
using namespace std;
void shift(int a[],int n,int x)
{
    x= x % n;
    for(int i=0; i<n; i++)
    {
        if(i<x)
        {
            cout<<a[n+i-x] << " ";
        }
        else
        {
            cout<<(a[i-x]) << " ";
        }
    }
    cout<<endl;
}
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    shift(a,n,x);
}

//L.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin>>n;
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }
    int x;
    x = n + n;
    int c[x];
    for(i = 0; i < n; i++)
    {
        c[i] = b[i];
    }
    for(i=0,j=n; j<x && i<n; i++, j++)
    {
        c[j] = a[i];
    }
    for(i = 0; i < x; i++)
    {
        cout<<c[i]<<" ";
    }
}

//M.
#include<bits/stdc++.h>
using namespace std;
int dist(int a[], int n)
{
    int x=0,j,i;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            if(a[i]==a[j])
                break;
        if(i==j)
            x++;
    }
    return x;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<dist(a, n);
}

//N.
#include<bits/stdc++.h>
using namespace std;
void zero(int a[], int n)
{
    int c=0;
    for(int i=0; i<n; i++)
        if(a[i]!=0)
            a[c++]=a[i];
    while(c<n)
        a[c++]=0;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    zero(a, n);
    for (int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
