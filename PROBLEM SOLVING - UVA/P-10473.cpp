#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll d,h;
    char ch;
    string str;

    while(cin>>d)
    {
        vector<int>ans;

        if(d<0) break;

        ch = getchar();

        if(ch == '\n')
        {
            /// deci to hexa;
            cout<<"0x";

            while(d>0)
            {
                int mod = d%16;

                ans.push_back(mod);

                d/=16;
            }

            reverse(ans.begin(),ans.end());

            for(int i=0; i<ans.size(); i++)
            {
                if(ans[i]>=10 && ans[i]<=15)
                {
                    int val = ans[i]+55;
                    cout<<(char)val;
                }

                else
                    cout<<ans[i];
            }
        }

        else
        {
            /// hexa to deci

            double sum = 0;

            cin>>str;

            reverse(str.begin(),str.end());

            for(int i=0; i<str.size(); i++)
            {
                if(str[i]>='A' && str[i]<='F')
                {
                    int val = ((int)str[i] - 55);
                    double res = (pow((double)16,(double)i)) * (double) val;
                    sum+=res;
                }

                else
                {
                    int val = ((int)str[i] - 48);
                    double res = (pow((double)16,(double)i)) * (double) val;
                    sum+=res;
                }
            }

            cout<<(ll)sum;
        }

        cout<<endl;
    }

    return 0;
}

