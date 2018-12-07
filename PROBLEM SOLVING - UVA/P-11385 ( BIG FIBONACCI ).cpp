/// UVA-DA VINCI CODE

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxi=INT_MAX;

map<int,int>track;

ll fib[60];

void generateFibo()
{
    fib[0]=1;
    fib[1]=2;

    track[1]=0;
    track[2]=1;

    for(ll i=2; fib[i-1]<maxi; i++)
    {
        ll val=fib[i-1]+fib[i-2];
        fib[i]=val;
        track[val]=i;
    }
}

int main ()
{
    generateFibo ();

    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;
        int ara[n+2];
        map<int,bool>slct;

        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
            slct[ara[i]]=true;
        }

        cin.ignore();

        string str,s="";
        getline(cin,str);

        for(int i=0; i<str.size(); i++)
            if(str[i]>='A' && str[i]<='Z') s+=str[i];

        map<int,char>mp;
        map<char,bool>sl;

        int ln=s.size();
        int mn=min(n,ln);

        for(int i=0; i<mn; i++)
        {
            sl[s[i]]=true;
            mp[ara[i]]=s[i];
        }

        sort(ara,ara+n,greater<int>());

        int mx=ara[0];
        mx=track[mx];

        for(int i=0; i<=mx; i++)
        {
            if(slct[fib[i]])
            {
                if(sl[mp[fib[i]]]) cout<<mp[fib[i]];
            }

            else cout<<" ";
        }

        cout<<endl;
    }

    return 0;
}
