//Codeforces Sheet 6(A-Z)

//A.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,f=0;
    cin>>n;
    if(n>0)
    {
        while(n%2 == 0)
        {
            n/=2;
        }
        if(n == 1)
        {
            cout<<"YES"<<endl;
        }
    }
    if(n != 1|| n == 0)
    {
        cout<<"NO"<<endl;
    }
}

//B.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int f=0;
    if(n==1)
    {
        f=1;
    }
    else
    {
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i == 0)
            {
                f = 1;
                break;
            }
        }
    }
    if(f==0)
        cout<< "YES" <<endl;
    else
        cout<< "NO"<<endl;
}

//C.
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b,sum=0, odd=0, even=0;;
    cin>>a>>b;
    if(b>a)
    {
        for (ll i = a; i <= b; i++)
        {
            sum  += i;
            if (i % 2 == 0)
                even += i;
            else
                odd += i;
        }
    }
    else if(a>b)
    {
        for (ll i = b; i <= a; i++)
        {
            sum  += i;
            if (i % 2 == 0)
                even += i;
            else
                odd += i;
        }
    }
    cout<<sum<<endl;
    cout<<even<<endl;
    cout<<odd<<endl;
}

//G.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i,sum=0;
    cin>>n;
    for(i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(i==(n/i))
                sum += i;
            else
                sum +=(i+n/i);
        }
    }
    cout<<sum<<endl;
}

//H.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    return b==0? a:gcd(b, a%b);
}

ll lcm(ll a, ll b)
{
    return a*(b/gcd(a, b));
}

int main()
{
    ll a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
}

//J.

#include <bits/stdc++.h>
#define ll long long
#define s 50000050
int a[s];
using namespace std;
int main()
{
    ll n;
    cin>>n;
    for(ll  i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            while(n%i == 0)
            {
                n/=i;
                a[i]++;
            }
        }

    }
    if(n!=1)
        a[n]++;

    ll c=0;

    for(ll  i=0; i<s; i++)
    {
        if(a[i]>0)
        {

            if(c!=0)
                cout<<"*"<<"("<<i<<"^"<<a[i]<<")";

            else
                cout<<"("<<i<<"^"<<a[i]<<")",c++;

        }
    }
}

//K.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fact(ll);
int main()
{
    int n,r;
    ll ncr, npr;
    cin>>n>>r;
    npr=fact(n)/fact(n-r);
    ncr=npr/fact(r);
    cout<<ncr<<" "<<npr;
}
ll fact(ll t)
{
    ll f=1;
    for(ll i=2; i<=t; i++)
    {
        f=f*i;
    }
    return f;
}


//L.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int c=1;
        for(int j=0; j<=i; j++)
        {
            cout<<c;
            cout<<" ";
            c=(c*(i-j)/(j+1));
        }
        for(int k=n-i; k>=0; k--)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

//M.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,s=" ";
    int b,r,i;
    long long add= 0;
    cin>>a>>b ;
    int n=a.size();
    for(i=0 ; i<n; i++)
    {
        add=add*10+(a[i]- '0');
        if(add >= b)
        {
            add = add % b;
        }
    }
    if (add == 0)
        cout<<"YES";
    else
        cout << "NO";
}

//N.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll bdec(string a, int x)
{
    ll p=1,n=0;
    int c,t;
    t=a.size();
    for(int i=t-1; i>=0; i--)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            c=a[i]-'0';
            n+=c*p;
            p=p*x;
        }
        else
        {
            c=a[i]-'A'+10;
            n+=c*p;
            p=p*x;
        }
    }
    return n;
}
string base(ll n, int x)
{
    string b="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string r=" ";
    while(n!=0)
    {
        r=b[n%x]+r;
        n/=x;
    }
    return r;
}
int main()
{
    int t,x;
    string a;
    cin>>t>>a>>x;
    if(t==1)
    {
        cout<<bdec(a,x);
    }
    else if(t==2)
    {
        ll n;
        stringstream f;
        f<<a;
        f>>n;
        cout<<base(n,x);
    }
}


//O.
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string m,t,n="9999";
    cin>>m;
    reverse(m.begin(),m.end());
    t=m;
    if(n.length()>m.length())
        swap(n,m);
    //for 9999 add
    int f=0;
    ll len=n.length();
    ll len1=m.length();
    string c;
    for(int i=0; i<len; i++) //add till 9999
    {
        int s;
        s=(m[i]-48)+(n[i]-48)+f;
        c+=s%10+48;
        f=s/10;
    }

    for(int i=len; i<len1; i++) // add after 9999
    {
        int s;
        s=(m[i]-48)+f;
        c+=s%10+48;
        f=s/10;
    }
    if(f)
        c+=f+48;

    reverse(c.begin(),c.end());

    cout << c << endl;

    //for 9999 multiple
    ll j=9999,g=0;
    ll len2=t.length();
    string q;
    for(int i=0; i<len2; i++)
    {
        int s1=(t[i]-'0')*j+g;
        q+=s1%10+'0';
        g=s1/10;
    }
    string p=to_string(g);
    reverse(p.begin(),p.end());
    if(g)
        q+=p;
    reverse(q.begin(),q.end());
    cout << q << endl;

}

//P.
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    double d = 0;
    for(ll i=2; i<=n; i++)
        d += log10(i);

    cout<<"Number of digits of " <<n<<"! is "<<floor(d)+1<<endl;
}

//R.
#include<bits/stdc++.h>
#define ll long long
#include<math.h>
using namespace std;
int main()
{
    long long x1,y1,x2,y2;
    float x,y,d;
    cin>>x1>>y1>>x2>>y2;
    x=(float)(x2-x1)*(x2-x1);
    y=(float)(y2-y1)*(y2-y1);
    d=sqrt(x+y);
    cout<<setprecision(9)<<fixed<<d;
}

//S.
#include<bits/stdc++.h>
#define ll long long
#include<math.h>
using namespace std;
int main()
{
    ll a,b,c,m,n,o;
    double ar,s;
    cin>>a>>b>>c;
    m=a+b; //c
    n=b+c; //a
    o=a+c; //b

    s=(a+b+c)/2;

    ar=(float)sqrt(s*(s-a)*(s-b)*(s-c));

    if(m<=c || n<=a || o<=b)
        cout<<"Invalid"<<endl;
    else
    {
        cout<<"Valid"<<endl;
        cout<<setprecision(6)<<fixed<<ar<<endl;
    }
}

//T.
#include <bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
int main()
{
    double x,y,r,n,x1,y1;
    cin >> x >> y >> r >> n;
    for(ll i=1; i<=n; i++)
    {
        cin>>x1>>y1;
        double a,b,m,pos;
        a=abs(x-x1);
        a=a*a;
        b=abs(y-y1);
        b=b*b;
        m=a+b;
        pos=sqrt(m);

        if(pos<=r)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}


//U.
#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
int main()
{
    ll x1,y1,x2,y2,x3,y3,f;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    f = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if(f==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}


//V.
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double x1, x2, y1, y2, x3, y3, x4, y4;

    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

    if ((x1 == x2) && (x3 == x4))
        cout<<"YES"<<endl;
    else if ((x1 == x2) || (x3 == x4))
        cout<<"NO"<<endl;
    else if(((y1 - y2) / (x1 - x2) - (y3 - y4) / (x3 - x4)) == 0.0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


//W.
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n=1;
    while(n--)
    {
        double x[4],y[4];
        for(int i=0; i<4; i++)
        {
            cin >> x[i] >> y[i];
        }
        double m=((x[0]-x[1])*(x[0]-x[1]))+((y[0]-y[1])*(y[0]-y[1]));
        double d = sqrt(m);
        d/=2;
        double n=((x[3]-x[2])*(x[3]-x[2]))+((y[3]-y[2])*(y[3]-y[2]));
        double d2 = sqrt(n);
        d2/=2;
        double x1= (x[1]+x[0])/2;
        double y1= (y[1]+y[0])/2;
        double x2= (x[3]+x[2])/2;
        double y2= (y[3]+y[2])/2;
        double c=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
        double p=sqrt(c);

        if ((p-d)<=d2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}


//Z.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll rad,slen,s;
    double t;
    cin>>rad>>slen;
    s=rad*2;
    t=(double)(1.414213562*slen);
    if(t<=s)
        cout<<"Circle";
    else if(s<=slen)
        cout<<"Square";
    else
        cout<<"Complex";
}
