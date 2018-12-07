#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(!n) break;

        map<int,bool>visit;
        vector<int>v;
        map<int,int>indeg,outdeg;

        while(n--)
        {
            int a,b;
            cin>>a>>b;
            outdeg[a]++;
            indeg[b]++;

            if(!visit[a])
            {
                v.push_back(a);
                visit[a]=true;
            }

            if(!visit[b])
            {
                v.push_back(b);
                visit[b]=true;
            }
        }

        int flag=1;
        for(int i=0; i<v.size(); i++)
        {
            if(indeg[v[i]]!=outdeg[v[i]])
            {
                flag=0;
                break;
            }
        }

        if(flag) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }

    return 0;
}

