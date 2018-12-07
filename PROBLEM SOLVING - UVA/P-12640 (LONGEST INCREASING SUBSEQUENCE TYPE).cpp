/// GOT WRONG ANSWER ON THIS TYPE

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char ch;
    vector<int>v;
    int cnt=0;
    int lis[100005];

    while(cin>>n)
    {
        ch=getchar();
        if(ch=='\n')
        {
            v.push_back(n);
            lis[cnt]=n;

            for(int i=1; i<v.size(); i++)
            {
                if(v[i]>0)
                {
                    if(v[i-1]>0)
                    {
                        lis[i]=lis[i-1]+v[i];
                        //cout<<"i: "<<i<<endl;
                        //cout<<"lis[i-1]: "<<lis[i-1]<<endl;
                        //cout<<"v[i]: "<<v[i]<<endl;
                        //cout<<"lis[i]: "<<lis[i]<<endl;
                    }
                }
            }
            //cout<<v[i]<<" ";
            //cout<<endl;

            int maxi=*max_element(lis,lis+cnt+1);
            if(maxi<0) maxi=0;
            cout<<maxi<<endl;
            v.clear();
            memset(lis,0,sizeof(lis));
            cnt=0;
        }

        else
        {
            v.push_back(n);
            lis[cnt]=n;
            cnt++;
        }
    }
    return 0;
}
