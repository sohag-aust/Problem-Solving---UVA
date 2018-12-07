#include<bits/stdc++.h>
using namespace std;

map<char,double>mp;

void init()
{
    double w=1,h=0.50,q=0.25,e=0.125,s=0.0625,t=0.03125,x=0.015625;

    mp['W']=w;
    mp['H']=h;
    mp['Q']=q;
    mp['E']=e;
    mp['S']=s;
    mp['T']=t;
    mp['X']=x;
}

int main()
{
    string str,s;
    init();
    while(cin>>str)
    {
        if(str=="*") break;
        vector<string>v;
        s="";

        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='/')
            {
                i++;
                while(str[i]!='/' && i<str.size())
                {
                    s+=str[i];
                    i++;
                }
                i--;
            }

            if(s.size()>0)
                v.push_back(s);

            s="";
        }

        double sum;
        int cnt=0;
        for(int i=0; i<v.size(); i++)
        {
            sum=0;
            string st=v[i];
            for(int j=0; j<st.size(); j++)
                sum+=mp[st[j]];

            if(sum==1) cnt++;
        }

        cout<<cnt<<endl;
    }

    return 0;
}
