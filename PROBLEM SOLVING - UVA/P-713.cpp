#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    cin.ignore();

    while(test--)
    {
        vector<int>ans;
        string s1,s2;
        cin>>s1>>s2;

        int l1=s1.size();
        int l2=s2.size();

        int carry=0,d1,d2;

        for(int i=0,j=0; (i<l1 || j<l2); i++,j++)
        {
            if(i<l1) d1=s1[i]-'0';
            else d1=0;

            if(j<l2) d2=s2[j]-'0';
            else d2=0;

            int sum=d1+d2+carry;

            if(sum<=9)
            {
                ans.push_back(sum);
                carry=0;
            }

            else
            {
                int mod=sum%10;
                ans.push_back(mod);
                carry=1;
            }
        }

        if(carry) ans.push_back(carry);

        int flag=0;
        for(int i=0; i<ans.size(); i++)
        {
            if(ans[i]!=0) flag=1;
            if(!flag) continue;
            else cout<<ans[i];
        }

        cout<<endl;
    }

    return 0;
}

