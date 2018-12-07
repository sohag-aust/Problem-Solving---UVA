#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxi=370;

vector<int>v[maxi];

void pre()
{
    ll s,c;
    v[0].push_back(1);

    for(int i=1; i<=maxi; i++)
    {
        c=0;
        for(int j=0; j<v[i-1].size(); j++)
        {
            s=((v[i-1][j])*i)+c;

            if(s>=10)
            {
                v[i].push_back(s%10);
                c=s/10;
            }

            else
            {
                v[i].push_back(s);
                c=0;
            }
        }

        if(c>=0)
        {
            while(c!=0)
            {
                v[i].push_back(c%10);
                c/=10;
            }
        }
    }
}

int main()
{
    pre();
    int n;

    while(cin>>n)
    {
        if(!n) break;

        map<int,int>vv;

        for(int i=v[n].size()-1; i>=0; i--)
        {
            int val=v[n][i];
            vv[val]++;
        }

        cout<<n<<"! --"<<endl;

        printf("(0)%3d   (1)%3d   (2)%3d   (3)%3d   (4)%3d\n",vv[0],vv[1],vv[2],vv[3],vv[4]);
        printf("(5)%3d   (6)%3d   (7)%3d   (8)%3d   (9)%3d\n",vv[5],vv[6],vv[7],vv[8],vv[9]);
    }

    return 0;
}
