#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,cs=0;
    cin>>test;
    cin.ignore();
    while(test--)
    {
        vector<string>v,ans;

        cin>>n;
        cin.ignore();
        string str;
        for(int i=0;i<n;i++)
        {
            cin>>str;
            v.push_back(str);
        }

        string s;
        cin>>s;
        //sort(s.begin(),s.end());

        for(int i=0;i<v.size();i++)
        {
            string st=v[i];
            //sort(st.begin(),st.end());

            int l1=st.size();
            int l2=s.size();
            int l=abs(l1-l2);
            int flag=1;

            for(int j=0,k=0;j<l1;j++,k++)
            {
                if(st[j]!=s[k])
                {
                    l++;
                    if(l>1)
                    {
                        flag=0;
                        break;
                    }
                }
            }

            if(flag)
                ans.push_back(st);
        }

        cout<<"Case "<<++cs<<":"<<endl;
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<endl;
    }

    return 0;
}
