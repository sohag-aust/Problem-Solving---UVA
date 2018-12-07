#include<bits/stdc++.h>
using namespace std;

map<string,int>mp;

void init()
{
    mp["zero"]=0;  mp["one"]=1;  mp["two"]=2;  mp["three"]=3;  mp["four"]=4;  mp["five"]=5;  mp["six"]=6;  mp["seven"]=7;
    mp["eight"]=8;  mp["nine"]=9;  mp["ten"]=10;  mp["eleven"]=11;  mp["twelve"]=12;  mp["thirteen"]=13;  mp["fourteen"]=14;
    mp["fifteen"]=15;  mp["sixteen"]=16;  mp["seventeen"]=17;  mp["eighteen"]=18;  mp["nineteen"]=19;  mp["twenty"]=20;
    mp["thirty"]=30;  mp["forty"]=40;  mp["fifty"]=50;  mp["sixty"]=60;  mp["seventy"]=70;  mp["eighty"]=80;  mp["ninety"]=90;
    mp["hundred"]=100;  mp["thousand"]=1000;  mp["million"]=1000000;
}

int main()
{
    init();
    string str;
    while(getline(cin,str))
    {
        int val=0;

        stringstream ss(str);
        string s;
        vector<string>v;
        while(ss>>s)
            v.push_back(s);

        int flag,val_m,val_t,sum;
        sum=flag=val_m=val_t=0;

        for(int i=0; i<v.size(); i++)
        {
            if(v[i]=="negative")
            {
                flag=1;
                continue;
            }

            if(v[i]=="million")
            {
                val_m=sum*mp[v[i]];
                sum=0;
            }

            else if(v[i]=="thousand")
            {
                val_t=sum*mp[v[i]];
                sum=0;
            }

            else if(v[i]=="hundred")
                sum*=mp[v[i]];

            else
                sum+=mp[v[i]];
        }

        int res=sum+val_m+val_t;

        if(flag)
            res*=(-1);

        cout<<res<<endl;
    }

    return 0;
}

