//CODEFORCES SHEET 4 (A-Z)_

//A.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    cout<<s.size()<<" "<<t.size()<<endl;
    cout<<s<<" "<<t<< endl;
    return 0;
}

//B.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string S;
    getline(cin,S);
    int l=S.length();
    for(int i=0; i<l; i++)
    {
        if(S[i]=='\\')
            break;
        cout<<S[i];
    }
    return 0;
}

//C.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[10000],y[10000];
    cin>>x>>y;
    if(strcmp(x,y)>0)
    {
        cout<<y;
    }
    if(strcmp(x,y)<0)
    {
        cout<<x;
    }
    if(strcmp(x,y)==0)
    {
        cout<<x;
    }
}

//D.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string A,B;
    getline(cin,A);
    int m=A.length();
    getline(cin,B);
    int n=B.length();
    cout<<m<<" "<<n<<endl;
    string C;
    C=A+B;
    cout<<C<<endl;
    swap(A[0],B[0]);
    cout<<A<<" "<<B;
}


//E.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    char S[1000000];
    int sum=0,i;
    gets(S);
    for(i=0; S[i]!='\0'; i++)
    {
        if((S[i]>='0') && (S[i]<='9'))
            sum+=(S[i]-'0');
    }
    cout<<sum;
}

//F.
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char S[100];
    int T,i,j,k;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>S;
        int m=strlen(S);
        k=0;
        if(m<=10)
        {
            cout<<S<<endl;
        }
        else
        {
            for(j=1; j<m-1; j++)
            {
                k++;
            }
            cout<<S[0]<<k<<S[m-1]<<endl;
        }
    }
}

//G.
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char S[100];
    int T,i,j,k;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>S;
        int m=strlen(S);
        k=0;
        if(m<=10)
        {
            cout<<S<<endl;
        }
        else
        {
            for(j=1; j<m-1; j++)
            {
                k++;
            }
            cout<<S[0]<<k<<S[m-1]<<endl;
        }
    }
}

//H.
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char S[100000];
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>S;
        int m=strlen(S);
        int n=0,j;
        for(j=0; j<m; j++)
        {
            if(S[j]=='1' && S[j+1]=='0' && S[j+2]=='1' || S[j]=='0' && S[j+1]=='1' && S[j+2]=='0')
            {
                n=1;
            }
        }
        if(n==1)
        {
            cout<<"Good"<<endl;
        }
        else
        {
            cout<<"Bad"<<endl;
        }
    }
}

//I.
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char S[10000];
    cin>>S;
    int len=strlen(S),f=0;
    for(int i=0; i<len; i++)
    {
        if(S[i]!=S[len-i-1])
        {
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

//J.
#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int a[26]= {0},i,j;
    for(i=0; s[i]!='\0'; i++)
    {
        j=s[i]-'a';
        a[j]++;
    }
    for(int i=0; i<26; i++)
    {
        if(a[i]!='\0')
        {
            cout<< char(i + 'a')<<" : "<< a[i]<< endl;
        }
    }
}

//K.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i;
    cin>>tc;
    while(tc--)
    {
        string a,b;
        cin>>a>>b;
        int m=a.size();
        int n=b.size();
        int s;
        if(m>n)
            s=n;
        else
            s=m;

        for(i=0; i<s; i++)
            cout<<a[i]<<b[i];

        if(m>n)
        {
            for(i=s; i<n; i++)
                cout<<a[i];
        }
        else
        {
            for(i=s; i<m; i++)
                cout<<b[i];
        }
        cout<<"\n";
    }
}

//L-
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,q;
    cin>>n>>q;
    cin>>s;
    while(q--)
    {
        string p;
        cin>>p;
        if(p=="pop_back")
            s.pop_back();
        if(p=="front")
        {
            cout<<s.front()<<endl;
        }
        if(p=="back")
        {
            cout<<s.back()<<endl;
        }
        if(p=="sort")
        {
            int l,r;
            cin>>l>>r;
            if(l>r)
                swap(l,r);
            sort(s.begin()+l-1, s.begin()+r);
        }
        if(p=="reverse")
        {
            int l,r;
            cin>>l>>r;
            if(l>r)
                swap(l,r);
            reverse(s.begin()+l-1, s.begin()+r);
        }
        if(p=="print")
        {
            int l;
            cin>>l;
            cout<<s[l-1]<<endl;
        }
        if(p=="substr")
        {
            int l,r;
            cin>>l>>r;
            if(l>r)
                swap(l,r);
            cout<<s.substr(l-1,r-l+1)<<endl;
        }
        if(p=="push_back")
        {
            char x;
            cin>>x;
            s.push_back(x);
        }
    }
}

//M-
#include<iostream>
using namespace std;
int main()
{
    string t="hello";
    string s;
    cin>>s;
    int count=0,i,j=0;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]==t[j])
        {
            count++;
            j++;
            if(j==5)
            {
                break;
            }
        }
    }
    if(count==5)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}


//N-
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(str[i+1]!=str[i])
        {
            count++;
        }
    }
    cout<<count;
}

//O-
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,freq[256]={0},i;
    char ch;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      scanf(" %c",&ch);
      freq[ch]++;
    }

    for(i=0;i<256;i++)
    {
      while(freq[i])
      {
        cout << (char) i;
        freq[i]--;
      }
    }

    return 0;

}

//P-
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    getline(cin,word);
    int count=0,i=0;
    if(word[i]>='A' && word[i]<='Z' || word[i]>='a' && word[i]<='z')
    {
    count++;
    }
    int len=word.size();
    for(int i=0; i<len; i++)
    {
    if(word[i]==' ' || word[i]=='!' || word[i]=='?' || word[i]==',' || word[i]=='.')
    {
    if(word[i+1]>='A' && word[i+1]<='Z' || word[i+1]>='a' && word[i+1]<='z')
    count++;
    }
    }
    cout<< count;
}

//Q-
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,a=-1;
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
        for(j=i-1;j>a;j--)
        {
        cout<<s[j];
        }
        printf(" ");
        a=i;
        }
    }
    for(i=(s.size())-1;i>a;i--)
    {
    cout<<s[i];
    }
}

//R-
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s, t;
    cin >> n >> s;

    long long scor = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'V')
            scor += 5;
        else if (s[i] == 'W')
            scor += 2;
        else if (s[i] == 'X')
            i++;
        else if (s[i] == 'Y')
        {
            s.push_back(s[i + 1]);
            i++;
        }
        else if (s[i] == 'Z')
        {
            if (s[i + 1] == 'V')
                scor = scor / 5, i++;
            else if (s[i + 1] == 'W')
                scor = scor / 2, i++;
            else
                continue;
        }

    }

    cout << scor << endl;
}

//S-
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l=0,r=0,count=0,c,i,j;
    for (i = 0; i<s.size(); i++)
    {
        if (s[i] == 'L')
        l++;
        else
        r++;
        if (l == r)
        count++;
    }
    cout<<count<<endl;
    c = l = r = 0;
    for(i=0; i< s.size(); i++)
    {
        if(s[i] == 'L')
        l++;
        else
        r++;
        if(l==r)
        {
        for(j=c;j<=i;j++)
        {
        cout<<s[j];
        }
        cout<<endl;
        c=1+i;
        l=r=0;
        }
    }
}

//T-
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100000],pass[10000]= {'\0'},profile[10000]= {'\0'},role[10000]= {'\0'},key[10000]= {'\0'},name[100000]= {'\0'};
    cin>>a ;
    int n=strlen(a);
    int j,k,f=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]=='u'&& a[i+1]=='s'&& a[i+2]=='e'&& a[i+3]=='r'&& a[i+4]=='n'&& a[i+5]=='a'&& a[i+6]=='m'&& a[i+7]=='e')
        {
            for(j=0,k=i+9; a[k]!='&'; k++,j++)
                name[j]=a[k];
            for(j=0,k+=5; a[k]!='&'; k++,j++)
                pass[j]=a[k];
            for(j=0,k+=9; a[k]!='&'; k++,j++)
                profile[j]=a[k];
            for(j=0,k+=6; a[k]!='&'; k++,j++)
                role[j]=a[k];
            for(j=0,k+=5; a[k]!='\0'; k++,j++)
                key[j]=a[k];
            break ;
        }
    }
    cout<<"username: "<<name<<endl;
    cout<<"pwd: "<<pass<<endl;
    cout<<"profile: "<<profile<<endl;
    cout<<"role: "<<role<<endl;
    cout<<"key: "<<key<<endl;
}

//U -
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int i,e,g,y,p,t;
    e=g=y=p=t=0;
    for(i=0; i<a.size(); i++)
    {
        if(a[i]=='e'||a[i]=='E')
        e++;
        else if(a[i]=='g'||a[i]=='G')
        g++;
        else if(a[i]=='y'||a[i]=='Y')
        y++;
        else if(a[i]=='p'||a[i]=='P')
        p++;
        else if(a[i]=='t'||a[i]=='T')
        t++;
    }
    int str[]={e,g,y,p,t};
    sort(str,str+5);
    cout<<str[0];
}

//V-
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0; i<n; i++)
    {
        if (s[i] !='E')
        {
        cout<<s[i];
        }
        else
        {
        if((i+4)<n && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T')
        {
        i=i+4;
        cout<<" ";
        }
        else
        {
        cout<<s[i];
        }
        }
    }
}

//W.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string org="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string s;
    cin>>s;
    int x=s.size();
    int y=key.size();
    int i,j;
    if(n==1)
    {
        for(i=0; i<x; i++)
        {
        for(j=0; j<y; j++)
        {
        if(s[i]==org[j])
        cout<<key[j];
        }
        }
    }
    else
    {
        for(i=0;i<x;i++)
        {
        for(j=0; j<y; j++)
        {
        if(s[i]==key[j])
        cout<<org[j];
        }
        }
    }
}
