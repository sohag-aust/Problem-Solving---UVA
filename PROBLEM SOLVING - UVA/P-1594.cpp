#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("8.txt","r",stdin);
    int test;
    cin>>test;

    while(test--)
    {
        int num;
        cin>>num;
        int ara[num+5];

        for(int i=0; i<num; i++)
            cin>>ara[i];

        int cnt=0;
        string str="LOOP";
        vector<int>v;
        v.clear();

        while(cnt<=1000)
        {
            v.clear();
            int temp=ara[0];

            for(int i=0,j=1; j<num; i++,j++)
            {
                int diff=abs(ara[j]-ara[i]);
                ara[i]=diff;
            }

            ara[num-1]=abs(ara[num-1]-temp);

            for(int i=0; i<num; i++)
            {
                if(ara[i]>0)
                    v.push_back(ara[i]);
            }

            if(v.size()==0)
            {
                str="ZERO";
                break;
            }

            cnt++;
        }

        if(str=="ZERO") cout<<"ZERO";
        else cout<<"LOOP";
        cout<<endl;
    }

    return 0;
}

