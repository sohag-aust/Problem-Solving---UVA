#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int cnt[200];
    int len,maxi;

    while(getline(cin,str))
    {
        len=str.size();

        memset(cnt,0,sizeof(cnt));

        for(int i=0; i<len; i++)
        {
            if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
                cnt[str[i]]++;
        }

        maxi=0;

        for(int i=65; i<=122; i++)
        {
            if(maxi<=cnt[i])
                maxi=cnt[i];
        }

        for(int i=65; i<=122; i++)
        {
            if(cnt[i]==maxi)
                cout<<(char)i;
        }

        cout<<" "<<maxi<<endl;
    }

    return 0;
}
