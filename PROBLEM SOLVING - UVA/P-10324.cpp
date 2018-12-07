#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int cs = 0;

    while(cin>>str)
    {
        int n;
        cin>>n;

        cout<<"Case "<<++cs<<":"<<endl;

        for(int k=0;k<n;k++)
        {
            int i,j;
            cin>>i>>j;
            int flag = 1;

            int maxi = max(i,j);
            int mini = min(i,j);

            char ch1 = str[i];

            for(int m=mini;m<=maxi;m++)
            {
                if(ch1 != str[m]){
                    flag = 0;
                    break;
                }
            }

            if(flag) cout<<"Yes";
            else cout<<"No";
            cout<<endl;
        }
    }

    return 0;
}

