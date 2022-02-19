//CODEFORCES GROUP ( SHEET 2- A to Z )
//A.
#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

//B-
#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d", &N);
    if(N>=2)
    {
        for(i=1; i<=N; i++)
        {
            if(i%2 == 0)
            {
                printf("%d\n",i);
            }
        }
    }
    else
        printf("-1");
    return 0;
}

//C-
#include<stdio.h>
int main()
{
    int N,j,i,e=0,o=0,p=0,n=0;
    scanf("%d",&N);
    for(j=1; j<=N; j++)
    {
        scanf("%d",&i);
        if(i%2==0)
        {
            e++;
        }
        if(i%2!=0)
        {
            o++;
        }
        if(i>0)
        {
            p++;
        }
        if(i<0)
        {
            n++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",e,o,p,n);
    return 0;
}

//D-
#include <stdio.h>
int main()
{
    int pass, x=10;
    while (x!=0)
    {
        scanf("%d",&pass);
        if (pass==1999)
        {
            printf("Correct\n");
            x=0;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}
//E-
#include <stdio.h>
int main()
{
    int i,num,n,large=0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num);
        if(num>large)
            large=num;
    }

    printf("%d\n",large);

    return 0;
}

//F-
#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= 12; ++i)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}

//G-
#include<stdio.h>
int main ()
{
    long long int a,t,i,j=1,fact;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&a);
        fact=1;
        for(; a>0; a--)
        {
            fact*=a;
        }
        printf("%lld\n",fact);
    }

    return 0;
}

//H-
#include<stdio.h>
int main()
{
    int a,i,n=0;
    scanf("%d",&a);
    for(i=2; i<=(a-1); i++)
    {
        if(a%i==0)
        {
            n++;
            break;
        }
    }
    if(n==0)
        printf("YES\n");
    else
        printf("NO\n");

}

//I-
#include<stdio.h>
int main()
{
    int n,i=1,rev=0;
    scanf("%d", &n);
    int m=n;
    while(n!=0)
    {
        int rem=n%10;
        n/=10;
        rev=rem+rev*10;
        i*=10;
    }
    printf("%d\n",rev);
    if(rev==m)
        printf("YES");
    else
        printf("NO");
}

//J-

#include<stdio.h>
int main()
{
    int j,i,c,n;
    scanf("%d",&n);
    for(j = 1; j<=n; j++)
    {
        c=0;
        for(i=2; i<=j/2; i++)
        {
            if(j%i==0)
            {
                c++;
                break;
            }
        }
        if(c==0 && j!= 1)
            printf("%d ",j);
    }
    return 0;
}

//K-
#include <stdio.h>
int main()
{
    int x, i;
    scanf("%d", &x);
    for(i = 1; i <= x; i++)
    {
        if((x%i) == 0)
        {
            printf("%d", i);
            printf("\n");
        }
    }

    return 0;
}

//L-
#include<stdio.h>
int main()
{
    int n1,n2,gcd,x,y;
    scanf("%d %d", &n1,&n2);
    x=n1;
    y=n2;

    while(n1!=n2 )
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
            n2=n2-n1;
        }

    }
    printf("%d\n", n1);

    return 0;

}

//M-
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,r,f=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        int n=i,j=0,k=0;
        while(n!=0)
        {
            r=n%10;
            if(r==4 || r==7)
                k++;
            n=n/10;
            j++;
        }
        if(k==j)
        {
            cout<<i<<" ";
            f++;
        }
    }
    if(f==0)
        cout<<"-1";
}

//N-
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char s;
    cin>>s;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        int b;
        cin>>b;
        for(int j=1; j<=b; j++)
        {
            cout<<s;
        }
        cout<<endl;
    }
}

//O-
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");

    }
}

//P-
#include<stdio.h>
int main()
{
    int r,n, c;
    scanf("%d", &n);
    for(r=n; r>=1; r--)
    {
        for(c=1; c<=r; c++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//R-
#include<stdio.h>
int main ()
{
    int m,n,i,sum,x;
    while(1)
    {
        scanf("%d%d",&m,&n);
        sum=0;
        if(m>0 && n>0)
        {
            if(m>=n)
            {
                for(i=n; i<=m; i++)
                {
                    printf("%d ",i);
                    sum+=i;
                }
                printf("sum =%d\n",sum);
            }
            else if(m<=n)
            {
                for(i=m; i<=n; i++)
                {
                    printf("%d ",i);
                    sum+=i;
                }
                printf("sum =%d\n",sum);
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}

//S-
#include<stdio.h>
int main()
{
    int t,a,b,i,sum,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        if(a>b)
        {
            for(j=b+1; j<a; j++)
            {
                if(j%2==1)
                    sum+=j;
            }
        }
        else
        {
            for(j=a+1; j<b; j++)
                if(j%2==1)
                {
                    sum+=j;
                }
        }
        printf("%d\n",sum);
    }
}

//T-
#include<stdio.h>
int main ()
{
    int t,i,j,k;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        for(j=t-1; j>=i; j--)
        {
            printf(" ");
        }
        for(k=1; k<=2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

//U-
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N,a,b,i,sum,c=0,t,r;
    cin>>N;
    cin>>a;
    cin>>b;
    for(i=1; i<=N; i++)
    {
        sum=0;
        t=i;
        while(t>0)
        {
            r=t%10;
            sum+=r;
            t/=10;
        }
        if(sum>=a && sum<=b)
        {
            c+=i;
        }
    }
    cout<<c<< " ";
}

//V-
#include<stdio.h>
int main ()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=1; i<=4*N-1; i+=4)
    {
        for(j=i; j<=i+2; j++)
        {
            printf("%d ",j);
        }
        printf("PUM\n");
    }
}

//W-
#include<stdio.h>
int main ()
{
    int t,i,j,k;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        for(j=t-1; j>=i; j--)
        {
            printf(" ");
        }
        for(k=1; k<=2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=t; i>=1; i--)
    {
        for(j=t-1; j>=i; j--)
        {
            printf(" ");
        }
        for(k=1; k<=2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

 
//X-
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,b=1,i,r,count;
    long long int a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        count=0;
        while(a>0)
        {
            if(a%2==1)
                count++;
            a/=2;
        }
        int sum=0;
        sum=pow(2,count)-1;
        cout<<sum<<endl;
    }
    return 0;
}

//Y-
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,a,b,c;
    cin>>n;
    i=1;
    a=0;
    b=1;
    for(; i<=n; i++)
    {
        cout<<a<<" ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

//Z-
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int k,s,ans=0;
    cin>>k>>s;
    for(int x=0; x<=k; x++)
    {
        for(int y=0; y<=k; y++)
        {
            int z=s-(x+y);
            if(z>=0 && z<=k)
                ans++;
        }
    }
    cout<<ans<<endl;
}
