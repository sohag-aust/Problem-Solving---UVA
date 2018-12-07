///UVA-BURGER TIME?

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        char ch;
        if(!n) break;
        vector<int>r,d;
        int flag=0;

        for(int i=1; i<=n; i++)
        {
            cin>>ch;
            if(ch=='Z') flag=1;
            else if(ch=='R') r.push_back(i);
            else if(ch=='D') d.push_back(i);
        }

        int dl=d.size();
        int rl=r.size();
        int maxi=max(dl,rl);

        sort(d.begin(),d.end());
        sort(r.begin(),r.end());
        int m=2000010;

        for(int i=0; i<dl; i++)
        {
            for(int j=0; j<rl; j++)
            {
                int dis=abs(d[i]-r[j]);
                if(dis<m) m=dis;
            }
        }

        if(flag) m=0;
        cout<<m<<endl;
    }

    return 0;
}

