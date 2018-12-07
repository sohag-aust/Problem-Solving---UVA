#include<bits/stdc++.h>
using namespace std;

int ara[30];
int brr[30];

int main()
{
    int n;

    while(cin>>n)
    {
        map<int,int>mp1,mp2;

        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
            mp1[ara[i]] = i+1;
        }

        for(int i=0; i<n; i++)
        {
            cin>>brr[i];
            mp2[brr[i]] = i+1;
        }

        int j = 0;
        int minimum = 0;

        while(j<n)
        {
            queue<int>q;

            if(ara[j] == brr[j])
            {
                j++;
                continue;
            }

            int pos1 = mp1[brr[j]];
            int pos2 = mp2[brr[j]];

            int diff = pos1-pos2;

            if(diff > 0)
            {
                minimum += diff;

                q.push(ara[j]);

                ara[j] = brr[j];

                for(int i=j+1; i<n; i++)
                {
                    if(i != pos1-1)
                    {
                        q.push(ara[i]);
                    }

                    ara[i] = q.front();
                    q.pop();
                }
            }

            for(int i=0; i<n; i++)
            {
                mp1[ara[i]] = i+1;
            }

            j++;
        }

        cout<<minimum<<endl;
    }

    return 0;
}


