//A-
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    cout << "Hello, " << s ;
    return 0;
}

//B-
#include <stdio.h>
int main ()
{
    int i;
    long long l;
    char c;
    float f;
    double d;
    scanf("%d %lld %c %f %lf",i,l,c,f,d);
    printf("%d \n %lld \n %c \n %f \n %lf");
    return 0;
}

//C-
#include<stdio.h>
int main()
{
   long long int X,Y;
   scanf("%lld %lld",&X,&Y);
   printf("%lld + %lld = %lld\n",X,Y,(X+Y));
   printf("%lld * %lld = %lld\n",X,Y,(X*Y));
   printf("%lld - %lld = %lld\n",X,Y,(X-Y));
   return 0;
}

//D-
#include <stdio.h>
int main()
{
    long long int X,A,B,C,D;
    scanf("%lld%lld%lld%lld",&A,&B,&C,&D);
    X=(A*B)-(C*D);
    printf("Difference = %lld",X);
    return 0;
}

//E-
#include <stdio.h>
int main()
{
    float R,Area;
    scanf("%f",&R);
    Area=3.141592653*R*R;
    printf("%.9f",Area);
    return 0;
}

//F-
#include<stdio.h>
int main ()
{
    long long int N,M,Sum;
    scanf("%lld%lld", &N,&M);
    Sum= (N%10) + (M%10);
    printf("%d",Sum);
    return 0;
}
//G-
#include<stdio.h>
int main ()
{
    long long int N,Sum;
    scanf("%lld",&N);
    Sum=N*(N+1)/2;
    printf("%lld", Sum);
}

//H-
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double a,b;
    cin>>a>>b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(a/b)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(a/b)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(a/b)<<endl;
}

//I-
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    if(a>=b)
        printf("Yes");
    else
        printf("No");
    return 0;
}

//J-
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    if((a%b)==0 || (b%a)==0)
        printf("Multiples");
    else
        printf("No Multiples");
    return 0;
}

//K-
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int max=(a>=b&&a>=c)?a:(b>=a&&b>=c)?b:c;
    int min=(a<=b&&a<=c)?a:(b<=a&&b<=c)?b:c;
    printf("%d %d\n",min,max);
    return 0;
}

//L-
#include<stdio.h>
#include<string.h>
int main ()
{
    char f1[1000],f2[1000],s1[1000],s2[1000];
    scanf("%s%s%s%s",&f1,&s1,&f2,&s2);
    if(strcmp(s1,s2)==0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}
//M-
#include<stdio.h>
int main ()
{
    char X;
    scanf("%c",&X);
    if(X>='A' && X<='Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if(X>='a' && X<='z')
    {
        printf("ALPHA\nIS SMALL");
    }

    else
    {
        printf("IS DIGIT");
    }
    return 0;
}
//N-
#include<stdio.h>
int main ()
{
    char X;
    scanf("%c",&X);
    if(X>=95 && X<=122)
    {
        printf("%c\n",X-32);
    }
    else
        printf("%c\n",X+32);
}
//O-
#include<stdio.h>
int main ()
{
    int A,B;
    char c;
    scanf("%d%c%d",&A,&c,&B);
    switch(c)
    {
    case '+':
        printf("%d\n",A+B);
        break;
    case '-':
        printf("%d\n",A-B);
        break;
    case '*':
        printf("%d\n",A*B);
        break;
    case '/':
        printf("%d\n",A/B);
        break;
    }
}
//P-
#include<stdio.h>
int main ()
{
    int X,n;
    scanf("%d",&X);
    n=X/1000;
    if(n%2==0)
        printf("EVEN");
    else
        printf("ODD");
    return 0;
}
//Q-
#include<stdio.h>
int main ()
{
    float X,Y;
    scanf("%f%f",&X,&Y);
    if(X>0 && Y>0)

        printf("Q1");

    else if(X<0 && Y>0)

        printf("Q2");

    else if(X<0 && Y<0)

        printf("Q3");

    else if(X>0 && Y<0)

        printf("Q4");

    else if (X==0 && Y==0)

        printf("Origem");

    else if (Y==0)

        printf("Eixo X");

    else if(X==0)

        printf("Eixo Y");

    return 0;
}
//R-
#include <stdio.h>
int main()
{
    int D,M,Y,X,N;
    scanf("%d",&N);
    Y=N/365;
    X=N%365;
    D=X%30;
    M=X/30;
    printf("%d years\n",Y);
    printf("%d months\n", M);
    printf("%d days", D);
}
//S-
#include<stdio.h>
int main ()
{
    double N;
    scanf("%lf",&N);
    if(N>=0 && N<=25)
        printf("Interval [0,25]");
    else if(N>25 && N<=50)
        printf("Interval (25,50]");
    else if(N>50 && N<=75)
        printf("Interval (50,75]");
    else if(N>75&& N<=100)
        printf("Interval (75,100]");
    else
        printf("Out of Intervals");
    return 0;
}
//T-
#include<stdio.h>
int main ()
{
    double N;
    scanf("%lf",&N);
    if(N>=0 && N<=25)
        printf("Interval [0,25]");
    else if(N>25 && N<=50)
        printf("Interval (25,50]");
    else if(N>50 && N<=75)
        printf("Interval (50,75]");
    else if(N>75&& N<=100)
        printf("Interval (75,100]");
    else
        printf("Out of Intervals");
    return 0;
}
//V-
#include<stdio.h>
int main ()
{
    int a,b;
    char s;
    scanf("%d %c%d",&a,&s,&b);
    if(s == '>')
    {
        if(a > b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else if(s == '<')
    {
        if(a < b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else if(s == '=')
    {
        if(a == b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}
//W-
#include<stdio.h>
int main()
{
    int a,b,c;
    char s,q;
    scanf("%d %c%d %c%d",&a,&s,&b,&q,&c);
    if( s == '+')
    {
        if(a+b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d",a+b);
        }
    }
    else if(s == '-')
    {
        if(a-b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d",a-b);
        }
    }
    else if(s =='*')
    {
        if( a*b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d",a*b);
        }
    }
    return 0;
}
//X-
#include<stdio.h>
int main ()
{
    int l1,r1,l2,r2,min,max;
    scanf("%d%d%d%d",&l1,&r1,&l2,&r2);
    if(l1>=l2)
    {
        min=l1;
    }
    else
    {
        min=l2;
    }
    if(r1>=r2)
    {
        max=r2;
    }
    else
    {
        max=r1;
    }
    if(max>=min)
    {
        printf("%d %d\n",min,max);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
//Y-
#include<stdio.h>
int main ()
{
    long long int a,b,c,d,m;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    a=a%1000;
    b=b%1000;
    c=c%1000;
    d=d%1000;
    m=(a*b*c*d)%100;
    if(m<10)
    {
        printf("0%lld\n",m);
    }
    else
        printf("%lld\n",m);
}
//Z-

#include<stdio.h>
#include<math.h>
int main()
{
    long long int A,B,C,D;
    scanf("%lld%lld%lld%lld", &A,&B,&C,&D);
    if(B*log(A)>D*log(C))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}
