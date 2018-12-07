#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    int test;
    cin>>test;

    while(test--)
    {
        multimap<int,int>mp;
        queue<pair<int,int> >q;
        priority_queue<int>pq;

        int n,m;
        cin>>n>>m;

        int ara[n+2];

        for(int i=0; i<n; i++) cin>>ara[i];

        for(int i=0; i<n; i++)
        {
            int v = ara[i];

            if(v > ara[m]) pq.push(v);

            mp.insert({v,i});
            q.push({v,i});
        }

        int cnt = 0;

        if(pq.empty())
        {
            while(!q.empty())
            {
                int frnt = q.front().first;
                int frnt_i = q.front().second;

                if(frnt_i == m && pq.empty()) break;

                q.pop();

                if(frnt >= ara[m])
                {
                    cnt++;
                    q.push({frnt,frnt_i});
                }
            }
        }

        else
        {
            while(!q.empty())
            {
                int frnt = q.front().first;
                int frnt_i = q.front().second;

                if(frnt_i == m && pq.empty()) break;

                q.pop();

                if(pq.empty() && frnt >= ara[m]) cnt++;

                if(frnt == pq.top() && !pq.empty())
                {
                    pq.pop();
                    cnt++;
                }

                else
                {
                    if(frnt >= ara[m])
                        q.push({frnt,frnt_i});
                }
            }
        }

        cout<<cnt+1<<endl;
    }

    return 0;
}

