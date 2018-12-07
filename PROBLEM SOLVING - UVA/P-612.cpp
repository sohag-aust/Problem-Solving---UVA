#include<bits/stdc++.h>
using namespace std;

string temp = "ACGT";

struct node
{
    int length;
    int pos;
    string ans;
} dp[100];

bool cmp(node a,node b)
{
    if(a.length == b.length) return a.pos < b.pos;
    return a.length < b.length;
}

void init()
{
    for(int i=0; i<100; i++)
    {
        dp[i].length = dp[i].pos = 0;
        dp[i].ans = "";
    }
}

int main()
{
    int test;
    cin>>test;
    cin.ignore();

    while(test--)
    {
        int len,tot;
        cin>>len>>tot;

        for(int k=0; k<tot; k++)
        {
            int sum;
            string str;

            cin>>str;

            map<char,int>mp;

            int i = -1;

            while(str[++i])
            {
                mp[str[i]]++;
            }

            sum = 0;

            for(int i=0; str[i]; i++)
            {
                char ch = str[i];

                for(int j=0; temp[j]; j++)
                {
                    if(ch > temp[j])
                    {
                        sum += mp[temp[j]];
                    }

                    else break;
                }

                mp[ch]--;
            }

            dp[k].ans = str;
            dp[k].length = sum;
            dp[k].pos = k;
        }

        sort(dp,dp+tot,cmp);

        for(int i=0; i<tot; i++)
            cout<<dp[i].ans<<endl;

        if(test) cout<<endl;
        init();
    }

    return 0;
}

