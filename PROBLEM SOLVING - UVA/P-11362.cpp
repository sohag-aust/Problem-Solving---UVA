#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int flag;
        int n;
        cin>>n;
        cin.ignore();
        string str[n+2];

        for(int i=0; i<n; i++) cin>>str[i];

        sort(str,str+n); /// sort korle serial wise ak e jegula oigula pasapasi cole asbe.. string gula...
        /// tahole kachakachi prefix gula aktar por akta pasapasi thakbe.. tahole pasapasi 2 ta string er moddhe chk krte thakbo..

        ///for(int i=0;i<n;i++)
            ///cout<<str[i]<<endl;

        for(int i=0,j=i+1; j<n; i++,j++)
        {
            flag=1;

            int maxi=min(str[i].size(),str[j].size());

            string a,b;
            a=str[i];
            b=str[j];

            for(int k=0; k<maxi; k++)
            {
                if(a[k]!=b[k])
                {
                    flag=0;
                    break;
                }
            }

            if(flag) break;
        }

        if(flag) cout<<"NO";
        else cout<<"YES";
        puts("");
    }

    return 0;
}

