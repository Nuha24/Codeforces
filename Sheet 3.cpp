//Codeforces Sheet-3 (A-Z)
//A.
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n;
    cin>>n;
    long long int a[n],sum=0;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    cout<<abs(sum)<<endl;
}

//B.
#include <stdio.h>
int main()
{
    int arr[100000];
    long long int n, i, element;
    scanf("%lld", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%lld", &element);
    for(i=0; i<n; i++)
    {
        if(arr[i] == element)
        {
            printf("%d\n",i);
            break;
        }
    }
    if(i == n)
    {
        printf("-1");
    }
    return 0;
}


//C.
#include <stdio.h>
int main()
{
    int arr[10000], n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            arr[i]=2;
        }
        else if(arr[i]>0)
        {
            arr[i]=1;
        }
        else if(arr[i]==0)
        {
            arr[i]=0;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

//D.
#include <stdio.h> int main()
{
    int a[1000], n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<=10)
        {
            printf("A[%d] = %d\n",i,a[i]);
        }
    }
}

E.
#include<stdio.h>
int main()
{
    int i, x,n, position;
    scanf("%d", &n);
    int arr[n];
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    x = arr[1];
    position = 1;
    for(i = 1; i <= n; i++)
    {
        if(x > arr[i])
        {
            x = arr[i];
            position = i;
        }
    }
    printf("%d ", x);
    printf("%d", position);
}

//F.
#include<stdio.h>
int main()
{
    int arr[10000], n,i, element;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

//G.
#include<stdio.h>
int main()
{
    int n,i,a[100000];
    scanf("%d ",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n/2; i++)
    {
        if(a[i]!=a[n-1-i]) break;
    }
    if(i==n/2) printf("YES\n");
    else printf("NO\n");
}

//H.
#include<stdio.h>
int main()
{
    int arr[1000],temp, j,n, i, element;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++) if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

//I.
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for(int x=1; x<=t; x++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int sum=0,mini=100000000;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                sum=a[i]+a[j]+j-i;
                if(sum<=mini)
                {
                    mini=sum;
                }
            }
        }
        cout<<mini<<endl;
    }
}

//J.
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int min=a[0],count=0;
    for(int i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(min==a[i]) count++;
    }
    if(count%2!=0) cout<<"Lucky"<<endl;
    else cout<<"Unlucky"<<endl;
}

//K.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    char c;
    for(int i=0; i<n; i++)
    {
        cin>>c;
        sum+=(c-48);
    }
    cout<<sum<<endl;
}

//L.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++)
            cin>>a[j];
        for(int j=0; j<n; j++)
            cout<<a[j]<<" ";
        for(int j=0; j<n; j++)
        {
            int m=a[j];
            for(int k=j+1; k<n; k++)
            {
                m=max(m,a[k]);
                cout<<m<<" ";
            }
        }
        cout<<endl;
    }
}


//M.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,s;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int max=a[0],min=a[0],x=0,y=0;
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            x=i;
        }
        if(a[i]<min)
        {
            min=a[i];
            y=i;
        }
    }
    s=a[x];
    a[x]=a[y];
    a[y]=s;
    for(i=0; i<n; i++) cout<<a[i]<<" ";
}

//N.
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int a, b,c=0,f=0;
    cin>>a>>b;
    string s;
    cin>>s;
    if(s.size()==(a+b+1))
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                c++;
            }
            if(i==a && s[i]=='-')
            {
                f=1;
            }
        }
        if(c==(a+b)&& f==1)
            cout<<"Yes";
        else
            cout<<"No";
    }
    else
        cout<<"No";
}


//O.
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    long long int a[55];
    for (i = 1; i < 51; i++)
    {
        a[1]=0, a[2]=1;
        a[i]=a[i-1]+a[i-2];
    }
    cout <<a[n]<<endl;
    return 0;
}

//P.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int x,y=10000000;
    for(i=0; i<n; i++)
    {
        x=0;
        while(a[i]%2==0)
        {
            x++;
            a[i]/=2;
        }
        y=min(x,y);
    }
    cout<<y<<endl;
}


//Q.
#include<stdio.h>
int main()
{
    int tc,n;
    scanf("%d", &tc);
    for(int i=1; i<=tc; i++)
    {
        scanf("%d", &n);
        int a[n];
        for(int j=0; j<n; j++)
            scanf("%d",&a[j]);
        int count=n;
        for(int j=1; j<n; j++)
        {
            for(int k=j; k<n; k++)
            {
                if(a[k-1]<=a[k])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
        printf("%d\n",count);
    }
}

//R.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b[10000],n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    int sum1=0,sum2=0;
    for(int i=0; i<n; i++)
    {
        sum1+=a[i];
        sum2+=b[i];
    }
    if(sum1==sum2)      cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}

//S.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,s;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin>>a[i][j];
    }
    cin>>s;
    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]==s)
            {
                count++;
            }
        }
    }
    if(count!=0)
        cout<<"will not take number";
    else
        cout<<"will take number";

}

//T.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)     cin>>a[i][j];
    }
    int sum=0,sum2=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i][i];
    }
    for(int i=0; i<n; i++)
    {
        sum2+=a[i][n-1-i];
    }
    cout<<abs(sum-sum2);
}

//U.
#include<stdio.h>
int main()
{
    int i,j,m, n,a[100000],b[100000],c=0;
    scanf("%d%d\n",&n,&m);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0,j=0; i<n; i++)
    {
        if(b[j]==a[i])
        {
            c++;
            j++;
        }
    }
    if(c==m)
        printf("YES");
    else
        printf("NO");
}


//W.
#include<bits/stdc++.h> using namespace std;
int main ()
{
    int r,c,j;
    cin>>r>>c;
    int a[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)             cin>>a[i][j];
    }
    for(int i=0; i<r; i++)
    {
        for( j=c-1; j>=0; j--)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
}

//X.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    char a[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    int r,c;
    cin>>r>>c;
    r--,c--;
    if(a[r][(c+1)]=='x'&& a[r][abs(c-1)]=='x' && a[r+1][c]=='x' && a[abs(r-1)][c]=='x' && a[r+1][c+1]=='x'&& a[abs(r-1)][c+1]=='x' && a[r+1][abs(c-1)]=='x'&& a[abs(r-1)][abs(c-1)]=='x')
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}

//Y.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100010],b[100010],n,q,i,j,l,r,sum=0,sum1=0;
    cin>>n>>q;
    for(i=1,j=1; i<=n; i++,j++)
    {
        cin>>a[i];
        sum=sum+a[i];
        b[j]=sum;
    }
    for(j=1,b[0]=0; j<=q; j++)
    {
        cin>>l>>r;
        sum1=b[r]-b[l-1];
        cout<<sum1<<endl;
    }
}

//Z.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100005],x,q,i,c = 0;
    cin >> n >> x;
    for(i = 0; i < n; i++)
        cin >> a[i];
    sort(a+0,a+n);
    while(x--)
    {
        cin >> q;
        long long l = 0,r = n-1;
        bool found = false;
        while(l <= r)
        {
            long long m = (l+r)/2;

            if(a[m] == q)
            {
                found = true;
                break;
            }
            else if(q < a[m])
                r = m-1;
            else if(q > a[m])
                l = m+1;
        }
        if(found)
            cout << "found" << endl;
        else
            cout << "not found" << endl;

    }

}
