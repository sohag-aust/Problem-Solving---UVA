#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int nine(string str)
{
    map<int,bool>MP;
    vector<ll>vec;
    int ara[1000];
    ll b,u,s,p,f,t,m,flag1,sum;
    sum=b=u=s=p=f=t=m=0;
    flag1=1;
    int k=0;

    MP[1]=true;
    MP[10]=true;
    MP[100]=true;
    MP[1000]=true;
    MP[10000]=true;
    MP[100000]=true;
    MP[1000000]=true;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='B')
        {
            sum++;
            b++;
            ara[k++]=1;
        }

        else if(str[i]=='U')
        {
            sum+=10;
            u++;
            ara[k++]=10;
        }

        else if(str[i]=='S')
        {
            sum+=100;
            s++;
            ara[k++]=100;
        }

        else if(str[i]=='P')
        {
            sum+=1000;
            p++;
            ara[k++]=1000;
        }

        else if(str[i]=='F')
        {
            sum+=10000;
            f++;
            ara[k++]=10000;
        }

        else if(str[i]=='T')
        {
            sum+=100000;
            t++;
            ara[k++]=100000;
        }

        else if(str[i]=='M')
        {
            sum+=1000000;
            m++;
            ara[k++]=1000000;
        }
    }

    if(b>9 || u>9 || s>9 || p>9 || f>9 || t>9 || m>9)
    {
        flag1=0;
        return flag1;
    }

    else
    {
        for(int i=0; i<k; i++)
        {
            if(MP[ara[i]])
            {
                vec.push_back(ara[i]);
                MP[ara[i]]=false;
            }
        }

        for(int i=0; i<vec.size(); i++)
        {
            if(vec[i]>vec[i+1])
            {
                for(int j=i+1; j<vec.size()-1; j++)
                {
                    if(vec[j]<vec[j+1])
                    {
                        flag1=0;
                        break;
                    }
                }
            }

            else if(vec[i]<vec[i+1])
            {
                for(int j=i+1; j<vec.size()-1; j++)
                {
                    if(vec[j]>vec[j+1])
                    {
                        flag1=0;
                        break;
                    }
                }
            }

            if(!flag1)
                return flag1;
        }

        return sum;
    }
}

int repeat(string str)
{
    int flag2=0;
    map<char,bool>mp;

    mp['B']=true;
    mp['U']=true;
    mp['S']=true;
    mp['P']=true;
    mp['F']=true;
    mp['T']=true;
    mp['M']=true;

    for(int i=1; i<str.size(); i++)
    {
        if(str[i]!=str[i-1])
        {
            mp[str[i-1]]=false;

            if(mp[str[i]]==false)
            {
                flag2=1;
                return flag2;
            }
        }
    }

    return flag2;
}

int main()
{
    ll test,sum,val1,val2;
    string str;

    cin>>test;
    cin.ignore();

    while(test--)
    {
        cin>>str;

        val1=nine(str);
        val2=repeat(str);

        if(val2)
            cout<<"error"<<endl;

        else
        {
            if(val1==0)
                cout<<"error"<<endl;

            else
                cout<<val1<<endl;
        }
    }

    return 0;
}

