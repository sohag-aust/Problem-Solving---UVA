#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a%b==0) return b;
    return gcd(b,a%b);
}

int main()
{
    int test;
    string str;

    cin>>test;
    cin.ignore();

    while(test--)
    {
        getline(cin,str);

        stringstream ss(str);
        int num,maxi=0;
        vector<int>v;

        while(ss>>num)
            v.push_back(num);


        for(int i=0; i<v.size(); i++)
        {
            for(int j=i+1; j<v.size(); j++)
            {
                int n1=v[i];
                int n2=v[j];

                int hcf=gcd(n1,n2);

                if(hcf>maxi)
                    maxi=hcf;
            }
        }

        cout<<maxi<<endl;
    }

    return 0;
}

