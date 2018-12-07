#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,sum;
    cin>>test;

    int a,b;
    char ch;

    cin.ignore();

    while(test--)
    {
        vector<int>v1,v2;
        scanf("%x %c %x",&a,&ch,&b);

        if(ch=='+')
            sum=a+b;

        else
            sum=a-b;

        int cnt=0;

        while(a)
        {
            int mod=a%2;
            v1.push_back(mod);
            a/=2;
            cnt++;
        }

        int rem=13-cnt;
        for(int i=0; i<rem; i++) v1.push_back(0);

        cnt=0;

        while(b)
        {
            int mod=b%2;
            v2.push_back(mod);
            b/=2;
            cnt++;
        }

        rem=13-cnt;
        for(int i=0; i<rem; i++) v2.push_back(0);

        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());

        for(int i=0; i<v1.size(); i++) cout<<v1[i];
        cout<<" "<<ch<<" ";
        for(int i=0; i<v2.size(); i++) cout<<v2[i];
        cout<<" = "<<sum<<endl;
    }

    return 0;
}

