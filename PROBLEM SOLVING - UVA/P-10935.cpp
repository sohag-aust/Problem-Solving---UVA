#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("11.txt","r",stdin);
    //freopen("11o.txt","w",stdout);

    int n;
    while(cin>>n)
    {
        if(!n) break;

        if(n==1)
        {
            cout<<"Discarded cards:"<<endl;
            cout<<"Remaining card: "<<1<<endl;
        }

        else
        {
            queue<int>q;
            vector<int>v;

            for(int i=2; i<=n; i++) q.push(i);

            v.push_back(1);

            int cnt=1;

            while(q.size()>1)
            {
                int val=q.front();

                if(cnt%2!=0)
                    q.push(val);

                else
                    v.push_back(val);

                q.pop();
                cnt++;
            }

            cout<<"Discarded cards: ";
            for(int i=0; i<v.size(); i++)
            {
                if(i<v.size()-1) cout<<v[i]<<", ";
                else cout<<v[i];
            }

            cout<<endl;

            cout<<"Remaining card: "<<q.front()<<endl;
        }
    }

    return 0;
}

