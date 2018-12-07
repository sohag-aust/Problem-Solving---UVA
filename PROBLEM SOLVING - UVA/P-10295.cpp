#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,test;
    cin>>n>>test;
    cin.ignore();
    map<string,ll>mp;

    for(int i=1;i<=n;i++)
    {
        string str;
        cin>>str;
        ll num;
        cin>>num;
        mp[str]=num;
    }

    for(int i=1;i<=test;i++)
    {
        string str;
        ll sum=0;
        while(cin>>str)
        {
            if(str==".") break;
            sum+=mp[str];
        }

        cout<<sum<<endl;
    }
}
/**
7 2
administer 100000
spending 200000
manage 50000
responsibility 25000
expertise 100
skill 50
money 75000
the incumbent will administer the spending of kindergarden milk money
and exercise responsibility for making change he or she will share
responsibility for the task of managing the money with the assistant
whose skill and expertise shall ensure the successful spending exercise .
this individual must have the skill to perform a heart transplant and
expertise in rocket science .
*/
