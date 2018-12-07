#include<bits/stdc++.h>
using namespace std;

int main()
{
    int edge;

    while(cin>>edge)
    {
        stack<int>st;
        queue<int>qu;
        priority_queue<int>pq;
        int s,q,p;

        s=q=p=1;

        while(edge--)
        {
            int a,b;
            cin>>a>>b;

            if(a==1)
            {
                if(s)
                    st.push(b);

                if(q)
                    qu.push(b);

                if(p)
                    pq.push(b);
            }

            else
            {
                if(s)
                {
                    if(st.empty() || st.top()!=b) s=0;
                    else st.pop();
                }

                if(q)
                {
                    if(qu.empty() || qu.front()!=b) q=0;
                    else qu.pop();
                }

                if(p)
                {
                    if(pq.empty() || pq.top()!=b) p=0;
                    else pq.pop();
                }
            }
        }

        int sum=s+q+p;

        if(sum>1) cout<<"not sure";
        else if(sum==1)
        {
            if(s) cout<<"stack";
            else if(q) cout<<"queue";
            else cout<<"priority queue";
        }

        else cout<<"impossible";
        cout<<endl;
    }

    return 0;
}


