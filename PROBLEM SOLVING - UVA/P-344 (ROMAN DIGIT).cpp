#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string>mp;
    map<int,bool>visit;

    for(int i=5; i<=100; i+=5)
        visit[i]=true;

    string s="",temp="";
    int cnt=0;

    for(int i=1; i<=39; i++)
    {
        if(visit[i+1])
        {
            s=temp;
            s+='i';

            if((i+1)%2!=0)
                s+='v';

            else
                s+='x';
        }

        else if(visit[i])
        {
            s=temp;

            if(cnt%2!=0)
                s+='x';

            else
                s+='v';
        }

        else
            s+='i';

        if(cnt==10)
        {
            temp+="x";
            cnt=0;
        }

        cnt++;
        mp[i]=s;
    }

    s=temp="xl";
    mp[40]=s;
    cnt=0;

    for(int i=41; i<=49; i++)
    {
        if(visit[i+1])
        {
            s=temp;
            s+='i';

            if((i+1)%2!=0)
                s+='v';

            else
                s+='x';
        }

        else if(visit[i])
        {
            s=temp;

            if(cnt%2==0)
                s+='v';
        }

        else
            s+='i';

        mp[i]=s;
        cnt++;
    }

    s=temp="l";
    cnt=0;
    mp[50]=s;

    for(int i=51; i<=89; i++)
    {
        if(visit[i+1])
        {
            s=temp;
            s+='i';

            if((i+1)%2!=0)
                s+='v';

            else
                s+='x';
        }

        else if(visit[i])
        {
            s=temp;

            if(cnt%2!=0)
                s+='x';

            else
                s+='v';
        }

        else
            s+='i';

        if(cnt==10)
        {
            temp+="x";
            cnt=0;
        }

        cnt++;
        mp[i]=s;
    }

    s=temp="xc";
    cnt=0;
    mp[90]=s;

    for(int i=91; i<=99; i++)
    {
        if(visit[i+1])
        {
            s=temp;
            s+='i';

            if((i+1)%2!=0)
                s+='v';

            else
                s+='x';
        }

        else if(visit[i])
        {
            s=temp;

            if(cnt%2==0)
                s+='v';
        }

        else
            s+='i';

        mp[i]=s;
        cnt++;
    }

    s=temp="c";
    mp[100]=s;

    string ans;

    int n;
    while(cin>>n)
    {
        ///cout<<"\nRoman Digit of "<<n<<" is -> "<<mp[n]<<endl<<endl;

        ans="";

        if(!n) break;

        for(int i=1;i<=n;i++)
            ans+=mp[i];

        int _i,_v,_x,_l,_c;
        _i=_v=_x=_l=_c=0;

        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]=='i') _i++;
            else if(ans[i]=='v') _v++;
            else if(ans[i]=='x') _x++;
            else if(ans[i]=='l') _l++;
            else if(ans[i]=='c') _c++;
        }

        cout<<n<<": "<<_i<<" i, "<<_v<<" v, "<<_x<<" x, "<<_l<<" l, "<<_c<<" c"<<endl;
    }

    return 0;
}

